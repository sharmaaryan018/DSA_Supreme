#include<iostream>
using namespace std;

void printArray(int a[], int n) {
    if(n == 0 ) return;
    cout<< *a<<" ";
    printArray(a+1,n-1);
}

int main() {
     int a[10]={2,3,4,5,6,7,8,9,10};
     int n;
     cin>>n;

     printArray(a,n);
    return 0;
}