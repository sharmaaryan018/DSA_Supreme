#include<iostream>
using namespace std;

class stack {
     public:
     
     int *arr;
     int top;
     int size;///size of array  not total no. of elements

     stack(int size) {
        arr = new int[size];
        this->size=size;
        top=-1;
     }

     //functions

     void push(int data) {
        if(size - top > 1){
            //space available

            top++;
            arr[top]=data;
        }
        else {
            //space not available
            cout<<"Stack Overflow"<<endl;
        }
     }
 
     void pop(){
            //stack is empty
            if(top==-1){
                cout<<"stack UNDERFLOW, can't delete element "<<endl;
            }
            else {
                //stack is not Empty
                top--;
            }
     }

     int getTop() {
         if(top==-1){
            cout<<"Thereis no e;ement in stack "<< endl;
         }
         else {
            return arr[top];
         }
     }

     //return number of valid elements present int the stack

     int getSize() {
        return top+1;

     }
     bool isEmpty() {
        if(top == -1) {
            return true;
        }
        else {
            return false;
        }
     }


};

int main() {

    stack s(4);

    //insertion

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // s.push(50);


    while(!s.isEmpty()){
        cout<<s.getTop()<<" "<<endl;
        s.pop();
    }

    cout<<"Size of stack: "<<s.getSize()<<endl;

   // s.pop();
    return 0;
}