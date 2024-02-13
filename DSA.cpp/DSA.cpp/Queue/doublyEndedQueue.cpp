#include<iostream>

using namespace std;

class Deque {

    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size) {
        this->size=size;
        arr= new int[size];
        front=-1;
        rear=-1;
    }

    void pushRear(int data) {
        //Queue Full
        //Single Element case
        //circular Queue
        //Normal flow
        //TODO: add one more condition in QueueFull if block

        if((front == 0 && rear == size-1)) {
            cout<<"Qis Full, cannot insert"<<endl;
            return;
        }
        else if(front == -1) {
            front = rear = 0;
            arr[rear] = data;
        }
        else if(rear == size-1 && front != 0) {
            rear = 0;
            arr[rear] = data;
        }
        else {
            rear++;
            arr[rear] = data;
        }
    }

    void pushFront(int data) {

        if((front == 0 && rear == size-1)) {
            cout<<"Qis Full, cannot insert"<<endl;
            return;
        }
        else if(front == -1) {
            front = rear = 0;
            arr[front] = data;
        }
        else if(rear != size -1 && front == 0) {
            front=n-1;
            arr[front] = data;
        }
        else {
            front--;
            arr[front] = data;
        }

    }

    void popFront() {
        //empty check
        //single element
        //circular nature
        //normal flow

        if(front==-1) {
            cout<<"Q is empty, cannot pop<<endl";
            return;
        }
        else if(front==rear) {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front=size-1) {
            front=0;
        }
        else {
            front++;
        }
    }
    void popRear() {

        
        if(front==-1) {
            cout<<"Q is empty, cannot pop<<endl";
            return;
        }
        else if(front==rear) {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(rear==0) {
            rear=size-1;
        }
        else {
            rear--;
        }
    }
};

int main() {


        return 0;
}