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
    void print(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<""<<endl;
            temp=temp->next;
        }
        cout<<endl;
    }

void sortZOT(Node * &head){
    int zero=0;
    int one=0;
    int two=0;

    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0)
            zero++;
        else if(temp->data==1)
            one++;
        else if(temp->data==2)
            two++;

            temp=temp->next;
        }

        //STEP 2: Fill 0s 1s 2s in original LL

        temp=head;
        //fill 0s
        while(zero--){
            temp ->data=0;
            temp=temp->next;
        }
        //fill 1s
        while(one--){
            temp ->data=1;
            temp=temp->next;
        }
        //fill 2s
        while(two--){
            temp ->data=2;
            temp=temp->next;
        }
    }

Node* sort(Node* head){
    //create dummy nodes

    Node* zeroHead= new Node(-1);
    Node* zeroTail= zeroHead;

    Node* oneHead= new Node(-1);
    Node* oneTail= oneHead;

    Node* twoHead= new Node(-1);
    Node* twoTail= twoHead;

    //traverse the original list
    Node* curr =head;
    while(curr!=head){

        if(curr->data==0){
            //take out the zero node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            //append the zero node in zeroHead LL
            zeroTail->next=temp;
            zeroTail=temp;
        }
        else if{
                  //take out the one node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            //append the zero node in zeroHead LL
            oneTail->next=temp;
            oneTail=temp;
        }
              //take out the two node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;

            //append the zero node in zeroHead LL
            twoTail->next=temp;
            twoTail=temp;
    }


    // join them
    //remove dummy nodes

    // modify one wali list
    Node* temp= oneHead;
    oneHead= oneHead->next;
    temp->next=NULL;
    delete temp;

    
    // modify two wali list
    Node* temp= twoHead;
    twoHead= twoHead->next;
    temp->next=NULL;
    delete temp;

    //join list
    if(oneHead!=NULL){
        //one wali list is non-empty
        zerotail->next=onehead;
        if(twoHead!=NULL)
            oneTail->next= twoHead;
    }
    else {
        //one wali list is empty
        if(twoHead!=NULL)
        zerotail=twoHead; 
    }

    //remove zeroHead dummy Node
    temp=zeroHead;
    zeroHead=zeroHead->next;
    temp->next=NULL;
    delete temp;
    // Return head of the modified LL

    return zeroHead;
    

}
int main() {
  Node* head = new Node(1);
  Node* second = new Node(2);
  Node* third = new Node(2);
  Node* fourth = new Node(0);
  Node* fifth = new Node(0);
  Node* sixth = new Node(0);

  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;

  cout<<"INput LL:";

  print(head);

  sortZOT(head);
 print(head);

}