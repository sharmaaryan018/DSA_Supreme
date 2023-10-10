#include<iostream>
using namespace std;

bool find(int arr[],int size, int key) {
    for(int i=0;i<size;i++) {
        if(arr[i]==key)
        return true;
    }
    return false;
}

int main() {
    int arr[5]={2,4,5,6,8,};
    int size=5;
    cout<<"enter the key to find "<<endl;
    int key;
    cin>>key;
     
     if(find(arr,size,key)) {
        cout<<"found"<<endl;
     }
     else {
        cout<<"not found"<<endl;
     }
}