#include<iostream>
using namespace std;

class Queue {

    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size) {
        this->size=size;
        arr= new int[size];
        front=0;
        rear=0;
    }

    void push(int data) {
        if(rear==size) {
            cout<<"Q is Full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop() {
        if(front==rear) {
            cout<<"Q is Empty"<<endl;
        }
        else {
            arr[front]=-1;
            front++;

            if(front==rear){
                front=0;
                rear=0;
            }

        }
    }

    int getFront() {
        if(front==rear) {
            cout<<"Q is empty"<<endl;
        }
        else {
            return arr[front];
        }
    }

    bool isEmpty() {
        if(front==rear) {
            return rear;
        }
        else {
            return false;
        }
    }

    int getSize() {
        return rear - front;
    }
};

int main() {
    Queue q(10);

    q.push(5);
    q.push(15);
    q.push(25);
    q.push(45);
    q.push(35);

    cout<<"Size of queue is : "<<q.getSize()<<endl;

    q.pop();

    cout<<"Size of queue is : "<<q.getSize()<<endl;

    cout<<"Front element is: "<<q.getFront()<<endl;

    if(q.isEmpty()) {
        cout<<"Q is Empty"<<endl;
    }
    else {
        cout<<"Q is not Empty"<<endl;
    }


    return 0;

}