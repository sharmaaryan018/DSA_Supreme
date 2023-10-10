#include<iostream>
#include<stack>
using namespace std;

void printMiddle(stack<int> &st, int &totalSize) {

    if(st.size() == 0) {
        cout<<"No Element In Stack"<< endl;
        return;
    }

    //base case 
    if(st.size() == totalSize/2 + 1){
        cout<<"Middle Element is: "<< st.top()<<endl;
    }

    int temp = st.top();
    st.pop();

    //recursive call
    printMiddle(st,totalSize);

    //backtrack
    st.push(temp);
}

int main() {
    //creation
    stack<int> st;

    //insertion

    st.push(10);
    st.push(27);
    st.push(50);
    st.push(100);
    st.push(60);
    st.push(30);
    st.push(90);
    st.push(200);

    int totalSize = st.size();
    printMiddle(st,totalSize);

  
    return 0;
}