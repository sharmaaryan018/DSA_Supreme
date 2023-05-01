#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s, int target) {
    //base case

    if(s.empty()) {
        s.push(target);
        return;
    }
     
     int topElement= s.top();
     s.pop();

     //recursive call
     solve(s,target);

     //BT
     s.push(topElement);  
}



int main() {

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    insertAtBottom(s);

    cout<<"Printing"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
       
    return 0;
}

