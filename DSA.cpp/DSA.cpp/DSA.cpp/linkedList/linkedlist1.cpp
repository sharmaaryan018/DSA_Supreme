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

//INSERT A NODE RIGHT AT THE HEAD OF THE LINKED LIST
void insertAtHead(Node* &head, Node* &tail, int data){

    //CHECK FOR EMPTY LINKED LIST
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }
    //STEP1-> Create a NODE
    Node* newNode= new Node(data);
    //step2
    newNode->next=head;
    //step3:
    head = newNode;
}



void insertAtTail(Node* &tail, Node* &head, int data){

    //CHECK FOR EMPTY LINKED LIST
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }

    //STEP1-> Create a NODE
    Node* newNode= new Node(data);
    //step2
    tail->next=newNode;
    //step3:
    tail = newNode;
}

    int findLength(Node* &head){
        int len=0;
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        return len;
    }

//INSERT A NODE RIGHT AT ANY POSITION OF THE LINKED LIST
void insertAtPosition( int data, int position, Node* &tail, Node* &head){

    //CHECK FOR EMPTY LINKED LIST
    if(head==NULL){
        Node* newNode= new Node(data);
        head=newNode;
        tail=newNode;
        return;
    }

   
   if(position==0){
    insertAtHead(head, tail, data);
    return;
   }

   int len=findLength(head);

   if(position>=len){
    insertAtTail(head, tail, data);
    return;
   }

  //Step1: find the position: prev & curr;
  int i=1;
  Node* prev = head;
  while(i<position){
    prev=prev->next;
    i++;
  }
  Node* curr=prev->next;
    //Step2:
    Node* newNode = new Node(data);
    //Step3:
    newNode->next=curr;
    //Step4:
    prev->next=newNode;

}

void print(Node* &head) {

        Node* temp=head;
        while(temp!=NULL){
            cout<< temp->data <<" ";
            temp=temp->next;
        }
    }


int main(){

    //Node* head= new Node(10);
    Node* head = NULL;
    Node* tail = NULL;
  /*  insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,80);
    insertAtTail(tail,head,77);
    insertAtTail(tail,head,90);
*/

 
    insertAtPosition( 100, 0, tail, head);
   
        print(head);

        cout<<"Head:"<<head->data<<endl;
        cout<<"Tail:"<<tail->data<<endl;

    return 0;
}