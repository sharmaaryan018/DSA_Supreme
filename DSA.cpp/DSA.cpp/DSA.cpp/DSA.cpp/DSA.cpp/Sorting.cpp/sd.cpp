#include<iostream>
#include<vector >
using namespace std;
  
int main() {
    vector<int>arr{5,4,2,1,7,6,0};
    int n=arr.size();
    for(int i=0;i<n-1;i++) {
        int minIndex=i;
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[minIndex]) {
                cout<<"j="<<j<<" minIndex= "<<minIndex<<endl;
                cout<< arr[j] <<" less than " << arr[minIndex] <<endl;
               minIndex=j;
               cout<< j<< minIndex <<endl;
            }
        }
        swap(arr[i],arr[minIndex]);
        cout<<"swapped "<< arr[i] << arr[minIndex]<<endl;
    }

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";

    }cout<<endl;
    return 0;
}
