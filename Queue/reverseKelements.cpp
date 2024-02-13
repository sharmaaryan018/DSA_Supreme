#include<iostream>
#include<queue>
#include<stack>
using namespace std;

// void reverseQueue(queue<int>&q) {
//     stack<int> s;
//     //Step1 -> put all elements of q in s
//     while(!q.empty()) {
//         int element = q.front();
//         q.pop();

//         s.push(element);
//     }

//     //Step2-> put all element from stack to queue
//     while(!s.empty()) {
//         int element = s.top();
//         s.pop();

//         q.push(element);
  
//     }

// }

            // void reverseQueueReverse(queue<int> &q) {
            //     //base cases
            //     if(q.empty()) 
            //     return;

            //     //step A
            //     int temp= q.front();
            //     q.pop();

            //     reverseQueueRecursion(q);

            //     q.push(temp);
            // }

void reverseK(queue<int> &q, int k) {
    //Step1-> Queue k elements in Stack

 
    stack<int> s;
    int count=0;
    int n = q.size();
       if(k<=0 || k>n)
    return;

    while(!q.empty()) {
        int temp = q.front();
        q.pop();

        s.push(temp);
        count++;

        if(count==k)
        break;
    }

    //Step2-> put stack elements again in queue

    while(!s.empty() && n-k != 0 ) {
        int temp = s.top();
        s.pop();
        q.push(temp);

    }
    //Step3-> push n-k element from q front to back
    count =0;
    while(!q.empty()) {
        int temp=q.front();
        q.pop();

        q.push(temp);
        count++;

        if(count== n-k)
        break;
    }
}

int main() {

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    //reverseQueue(q);

    reverseK(q,3);

    cout<<"printing queue"<<endl;
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}