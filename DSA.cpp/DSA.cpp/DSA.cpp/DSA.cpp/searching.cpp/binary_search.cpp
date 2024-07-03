#include<iostream>
using namespace std;

    int binarySearch(int arr[],int size,int target) {
        int start=0;
        int end=size-1;
        int mid=start+(end-start/2);
        while(start<=end) {
            int element=arr[mid];

            if(element==target) {
                return mid;
            }
            else if(target<element) {
                end=mid-1;
            }
            else {
                start=mid+1;
            }
            mid=start+(end-start/2);
        }
        return -1;
    }

int main() {
    int arr[]={2,3,4,5,6,7,8,16};
    int target=16;
    int size=8;

    int indexOfTarget=binarySearch(arr,size,target);
    if(indexOfTarget==-1) {
        cout<<"target not found"<<endl;
    }
    else{
        cout<<"target found at "<<indexOfTarget<<" index "<<endl;
    }
    return 0;
}