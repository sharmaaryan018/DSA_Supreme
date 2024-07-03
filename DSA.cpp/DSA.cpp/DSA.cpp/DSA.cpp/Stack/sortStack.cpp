#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &s, int target) {

    if(s.empty()) {
        s.push(target);
        return;
    }
    //base case
    if(s.top() >= target){ 
        s.push(target);
        return;
    }

    int topElement= s.top();
    s.pop();
    insertSorted(s,target);

    //BT
    s.push(topElement);
}

     void sortStack(stack <int> &s) {
        //base case
        if(s.empty()) {
            return;
        }
        int topElement= s.top();
        s.pop();

        sortStack(s);

        insertSorted(s, topElement);
     }

int main() {

     stack<int> s;

    //insertion

    s.push(10);
    s.push(27);
    s.push(50);
    s.push(100);
    s.push(60);
    s.push(30);
   
   sortStack(s );

    cout<< "printing" <<endl;

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }

    cout<<endl;


    return 0;
}