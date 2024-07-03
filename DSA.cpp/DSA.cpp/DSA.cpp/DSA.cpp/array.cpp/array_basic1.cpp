#include<iostream>
using namespace std;

int main() {

    //int n;
    //arr[n];
    //cin>>n;// BAD PRACTICE

    int arr[100];
    cout<<"Enter the input values in an array "<<endl;

    for(int i=0;i<10;i++) {
        cin>> arr[i];
    }

    cout<<"printing the array values "<<endl;
    for(int i=0;i<10;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}