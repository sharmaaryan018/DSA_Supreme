#include<iostream>
#include<queue>
using namespace std;

int main() {

    //creation
    queue<int> q;

    //insertion
    q.push(5);
    q.push(7);
    q.push(12);
    q.push(30);

    //size
    cout<< "Size of queue is: "<<q.size()<<endl;

    //removal
    q.pop();

    cout<<"Size of queue is: "<<q.size()<<endl;

    if(q.empty()) {
        cout<<"queue is empty"<<endl;
    }
    else {
        cout<<"Queue is not empty"<<endl;
    }

    cout<<"Front element is: "<<q.front()<<endl; 
    return 0;
} 