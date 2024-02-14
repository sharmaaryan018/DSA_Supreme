#include<iostream>
using namespace std;

bool findKey(int arr[][3],int rows,int cols, int key) {
     for (int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
           if(arr[i][j]==key)
           return true;
        }
     }
    return false;
}

int main() {
    int key=5;
    int arr[3][3];
    int rows=3;
    int cols=3;
     for (int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cin>>arr[i][j];
        }
     }
     cout<<"printing the matrix"<<endl;
      for (int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
      cout<<findKey(arr,rows,cols,key);

    return 0;
}
