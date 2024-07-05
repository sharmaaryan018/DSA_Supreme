#include<iostream>
using namespace std;

int main() {
     int arr[]={2,3,5,1,10,7,8};
     int size=8;
     int start=0;
     int end=size-1;

     while(true) {
        if(start>end)
        break;
        if(start==end) {
            cout<<arr[start]<<" ";
        }
        else {
    cout<<arr[start]<<" ";
    start++;
    cout<<arr[end]<<" ";
    end--;
        }
    }
return 0;
}