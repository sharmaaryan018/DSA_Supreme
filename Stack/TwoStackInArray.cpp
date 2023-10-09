#include<iostream>
using namespace std;

class stack {
     public:
     
     int *arr;
     int top1;
     int top2;
     int size;///size of array  not total no. of elements

     stack(int size) {
        arr = new int[size];
        this->size=size;
        top1=-1;
        top2=size;
     }

     //functions

     void push1(int data) {
        if(top2-top1==1) {
            //space not available
            cout<<"OVERFLOW"<<endl;
        }
        else {
           cout<<" space available"<<endl;
           top1++;
           arr[top1]=data;
        }
     } 
 
     void pop1(){
            //stack is empty
            if(top1==-1){
                cout<<"stack UNDERFLOW, can't delete element "<<endl;
            }
            else {
                //stack is not Empty
                top1--;
            }
     }

      void push2(int data) {
        if(top2-top1==1) {
            //space not available
            cout<<"OVERFLOW"<<endl;
        }
        else {
           cout<<" space available"<<endl;
           top2--;
           arr[top2]=data;
        }
     }

     
     void pop2(){
            //stack is empty
            if(top2==size){
                cout<<"stack UNDERFLOW, can't delete element "<<endl;
            }
            else {
                //stack is not Empty
                top2++;
            }
     }

     void print() {
        cout<<endl;
        for(int i=0; i<size;i++) {
            cout<<arr[i]<<" ";
        }cout<<endl;
     }
};


int main() {

    stack s(10);

    //insertion

    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();

     s.push2(60);
    s.print();
    s.push2(70);
    s.print();
    s.push2(80);
    s.print();
    s.push2(90);
    s.print();
    s.push2(100);
    s.print();


    s.pop1();
    cout<<"pop done"<<endl;
    s.print();
    return 0;
} 