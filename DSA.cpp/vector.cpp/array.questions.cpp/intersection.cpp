#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> arr{1,2,3,3,4,5};
    vector<int> brr{3,5,3,9,56};

    vector<int>ans;

    for(int i=0;i<arr.size();i++) {
        int element =arr[i];
        //for every element, run lopp on brr
        for(int i=0;i<brr.size();i++) {
            if(element==brr[i]) {
                //marking or we can use INT_MIN
                brr[i]=-1;
                ans.push_back(element);
            }
        }
    }

    //printing the answer
    for(auto value: ans) {
        cout<<value<<" ";
    }

    return 0;
}