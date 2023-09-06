#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class node{
    public:
    int data; 
    node* next;

    node(int val)
    {
        data  = val;
        next = NULL;
    }
};

void print(node* temp)
{
    // node* temp = head;
    while(temp)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
}

void reversell(node* head, int k)
{
    node* temp = head;
    vector<int> v;
    int c = 0;
    while(k>=c)
    {

        v.push_back(temp->data);
        temp = temp->next;
        c++;
    }

    reverse(v.begin(),v.end());
    for(int i=0;i<=k;i++)
    {
        cout << v[i];
    }

    int c1=0;
    temp  = head;
    while(c1<c)
    {
        temp = temp->next;
        c1++;
    }

    while(temp)
    {
        cout << temp->data;
        temp = temp->next;
    }
}
int main()
{
    node* reverse_node = new node(10);
     node* second = new node(20);
      node* third = new node(30);
       node* fourth = new node(40);
        node* fifth = new node(50);

        reverse_node->next = second;
        second->next = third;
        third->next = fourth;
        fourth->next = fifth;

        // print(reverse_node);
        reversell(reverse_node,2);
}