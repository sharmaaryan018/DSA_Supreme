#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr,int s, int e,int& key) {
    //base case
    if(s>e)
    return -1;

    int mid=(s+e)/2;

    if(arr[mid] == key)
    return mid;


    if(arr[mid]<key) {
        return binarySearch(arr,mid+1,e,key);
    }
    else
    {
           if(arr[mid]>key) {
        return binarySearch(arr,s,mid-1,key);
    }
}
}

int main() {
    vector<int> v{10,20,30,40,50,60,70,99};
    int n=v.size();  
    int target=99;
    int s=0;
    int e=n-1;


    int ans= binarySearch(v, s, e, target);

    cout<<"ans is: "<<ans<<endl;
    return 0;
}