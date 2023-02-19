#include<iostream>
#include<vector>
using namespace std;

    int firstOccurence(vector<int>arr,int target) {
        int start=0;
        int end=arr.size()-1;
        int mid=start+(end-start/2);
        int ans=-1;
        while(start<=end) {

            if(arr[mid]==target) {
                 ans=mid;
                end=mid-1;
            }
            else if(target<arr[mid]) {
                end=mid-1;
            }
            else {
                start=mid+1;
            } 
            mid=start+(end-start/2);
        }
        return ans;
    }

int main() {
    vector<int> v{1,2,3,3,3,4,4,5,4};
    int target=7;

    int ans=firstOccurence(v,target);
    cout<<"ans is "<<ans<<endl;
    return 0;
}