#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr{10,1,7,6,14,9};

    int n=arr.size();

    for(int round=1;round<n;round++) {
        //FETCH
        int val =arr[round];
        //COMPARE
        int j=round-1;
        for(; j>=0;j--) {
            if(arr[j]>val){
                //shift
                arr[j+1]=arr[j];
            }
            else{
                //stop 
                break;
            }
        }
        //Copy
        arr[j+1]=val;

    } 
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}