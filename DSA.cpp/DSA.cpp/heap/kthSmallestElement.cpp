#include<iostream>
#include<queue>
using namespace std;

int getSmallestKthElement(int arr[],int n, int k){
    //create max heap
    priority_queue<int> pq;
    //insert initial k elements of an array
    for(int i=0;i<k;i++) {
        pq.push(arr[i]);
    }
    //for remaining elements, push only if they are less than top
    for(int i=k;i<n;i++) {
        int element=arr[i];
        if(element<pq.top()){
            pq.pop();
            pq.push(element);
        }
    }

    int ans = pq.top();
    return ans;
}

int main() {
    int arr[]= {20,10,30,40,34,89,67,73,84,93};
    int n=10;
    int k=2;
    int ans= getSmallestKthElement(arr,n,k);
    cout<<ans<<endl; 
    return 0;
}