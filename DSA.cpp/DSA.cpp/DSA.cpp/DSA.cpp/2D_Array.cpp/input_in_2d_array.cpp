#include<iostream>
using namespace std;
 int main() {
    int arr[3] [3];
    int rows=3;
    int col=3;
    for (int i=0;i<rows;i++) {
        for(int j=0;j<col;j++) {
            cin>>arr[i][j];
        }
    }
    cout<<"printing colum wise"<<endl;
    for (int i=0;i<rows;i++) {
        for(int j=0;j<col;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 }