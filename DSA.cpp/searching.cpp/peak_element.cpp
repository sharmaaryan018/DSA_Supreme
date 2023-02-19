#include<iostream>
#include<vector>
using namespace std;

    int findPeakIndex(vector<int>& arr)  {
         int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        
        while(s<e) {
            if(arr[mid]<arr[mid+1]) {
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
           
        }
         return s;
    }

int main() {
        vector<int>arr={0,2,3,4,5,4,3,1,0};
        findPeakIndex(arr);

        int PeakIndex=findPeakIndex(arr);

        cout<<"peak Index is "<<PeakIndex<<endl;
    return 0;
}