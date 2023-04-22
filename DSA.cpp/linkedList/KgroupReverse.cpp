#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

   
};

 void print(Node* head) {

        Node* temp=head;
        while(temp!=NULL){
            cout<< temp->data <<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    Node* getMiddle(Node* &head){
        if(head==NULL){
            //LL is empty
            cout<<"LL is empty"<<endl;
            return head;
        }
        //only one node in LL
        if(head->next==NULL){
            return head;
        }
        //LL having > 1 node

        Node* slow = head;
        Node* fast=head->next;

        while(slow!=NULL && fast!=NULL){
            fast = fast->next;

            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }

    int getLength(Node* head){
        int len =0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }

    Node* reverseKNodes(Node* head,int k)
{
    if(head==NULL){
        cout<<"LL is Empty"<<endl;
        return NULL;
    }
    int len=getLength(head);
    if(k>len){
        return head;
    }

    //it means o. of nodes in ll is >=k
    //step->A: revrese first k nodes of LL
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;

    int  count =0;

    while(count<k){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if(forward!=NULL){
        //we still have nodes to reverse
       head->next= reverseKNodes(forward,k);
    }
    //step C: return head of the modified LL
    return prev;
}

int main() { 
    Node* head= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);
    Node* fourth= new Node(40);
    Node* fifth= new Node(50);
    Node* sixth= new Node(60);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
   // sixth->next=NULL;

    
    print(head);
    head=reverseKNodes(head,3);
    print(head);
   // cout<< "Middle node is: "<<getMiddle(head)->data<<endl;

    return 0;
}