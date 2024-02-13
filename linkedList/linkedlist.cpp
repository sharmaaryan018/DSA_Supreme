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

 void print(Node* &head) {

        Node* temp=head;
        while(temp!=NULL){
            cout<< temp->data <<" ";
            temp=temp->next;
        }
    }

int main() { 
    // Node* first= new Node(10);

    // Node* second= new Node(20);
    // Node* third= new Node(30);
    // Node* fourth= new Node(40);
    // Node* fifth= new Node(50);
    Node* head = new Node();
    
    while(true)
    {
        int ch;
        cout << "nter your choice\n";
        cin >> ch;

        if(ch==0) break;
        else {
            int val;
            cout << "Enter your value\n";
            cin >> val;
            
            Node* new_node = new Node(val);
            if(head->data==0  && head->next==NULL)
              {
                 head->data = new_node->data;
                 continue;
              }
            Node* temp = head;

            while(temp->next!=NULL)
            {
                temp = temp->next;
            }

            temp->next  = new_node;
        }
    }

    // first->next=second;
    // second->next=third;
    // third->next=fourth;
    // fourth->next=fifth;

    cout<< "printing the Linked list"<<endl;
    print(head);

    return 0;
}
