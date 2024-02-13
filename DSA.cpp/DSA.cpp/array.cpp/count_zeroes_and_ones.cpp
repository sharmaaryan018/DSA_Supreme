#include<iostream>
using namespace std;

int main() {
    int arr[]={0,0,0,0,0,1,1,0,1,0,0,0,3,4,5,5,1,1,1};

    int size=20;

    int numzero=0;
    int numone=0;

    for(int i=0;i<size;i++) {
        if(arr[i]==0) {
            numzero++;
        }
         if(arr[i]==1) {
            numone++;
        }
    }
    cout<<"no. of zeroes =  "<<numzero<<endl;
    cout<<"no. of ones =  "<<numone<<endl;
}