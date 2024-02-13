#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int>&q) {
    stack<int> s;
    //Step1 -> put all elements of q in s
    while(!q.empty()) {
        int element = q.front();
        q.pop();

        s.push(element);
    }

    //Step2-> put all element from stack to queue
    while(!s.empty()) {
        int element = s.top();
        s.pop();

        q.push(element);
  
    }

}

void reverseQueueReverse(queue<int> &q) {
    //base cases
    if(q.empty()) 
    return;

    //step A
    int temp= q.front();
    q.pop();

    reverseQueueRecursion(q);

    q.push(temp);
}

int main() {

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverseQueue(q);

    cout<<"printing queue"<<endl;
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}