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

// void reverseK(queue<int> &q, int k) {
//     //Step1-> Queue k elements in Stack

 
//     stack<int> s;
//     int count=0;
//     int n = q.size();
//        if(k<=0 || k>n)
//     return;

//     while(!q.empty()) {
//         int temp = q.front();
//         q.pop();

//         s.push(temp);
//         count++;

//         if(count==k)
//         break;
//     }

//     //Step2-> put stack elements again in queue

//     while(!s.empty() && n-k != 0 ) {
//         int temp = s.top();
//         s.pop();
//         q.push(temp);

//     }
//     //Step3-> push n-k element from q front to back
//     count =0;
//     while(!q.empty()) {
//         int temp=q.front();
//         q.pop();

//         q.push(temp);
//         count++;

//         if(count== n-k)
//         break;
//     }
// }

void interleaveQ(queue<int> &q) {
    //Step1-> Separate both halves

    int n = q.size();
    if(q.empty())
    return;
    int k =n/2;
    int count=0;
    queue<int> q2;

    while(!q.empty()) {
        int temp=q.front();
        q.pop();
        q2.push(temp);
        count++;

        if(count==k)
        break;
    }
    //Step2->  Start Interleaving 

    while(!q.empty() && !q2.empty()) {
        int first = q2.front();
        q2.pop();

        q.push(first);

        int second= q.front();
        q.pop();

        q.push(second);
    }
    //ODD CASE
    if(n&1) {
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

int main() {

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(1);
    q.push(4);
    q.push(8);
    q.push(7);
     q.push(9 );

    //reverseQueue(q);

    //reverseK(q,3);

    interleaveQ(q);

    cout<<"printing queue"<<endl;
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}