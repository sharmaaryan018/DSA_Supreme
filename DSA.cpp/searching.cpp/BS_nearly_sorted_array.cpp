#include<iostream>
#include<vector>
using namespace std;

    int binarySearch(vector<int>arr, int target) {
     
    int s=0;
    int end=arr.size()-1;
    int mid=s+(end-s)/2;

    while(s<=end) {
        if(arr[mid]==target) 
        return mid;
        if(mid+1<=end&&arr[mid+1]==target) 
        return mid+1;
        if(mid-1>=s&&arr[mid-1]==target) 
        return mid-1;

        if(target>arr[mid]) {
            s=mid+2;
        }
        else{
            end=mid-2;
        }
        mid=s+(end-s)/2;
    }
    return -1;
    }

int main() {

   vector<int> arr{10,3,40,20,50,80,70};
    int target=80;
    int ans=binarySearch(arr,target);

    cout<<"Index of "<<target<<" is "<<ans<<endl;
    return 0;
}