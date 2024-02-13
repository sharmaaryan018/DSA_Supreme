#include<iostream>
#include<limits.h>
using namespace std;

int main() {
    int arr[]={2,4,6,8,65,4,78};
    int size=10;
    int maxi=INT_MIN;

    for(int i=0;i<size;i++) {
        if(arr[i]>maxi) {
            maxi=arr[i];
        }
    }
    cout<<"maximum no. is  "<<maxi<<endl;
}