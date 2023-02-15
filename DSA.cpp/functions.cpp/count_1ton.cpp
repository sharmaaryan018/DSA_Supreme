#include<iostream>
using namespace std;
//n is a parameter
void printcounting(int n) {
    for(int i=0;i<n;i++) {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    cout<<"enter the value:  "<<endl;
    //n is arguement
    printcounting(n);
    return 0;
}