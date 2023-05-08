#include<iostream>
#include<deque>

using namespace std;

void solve(int arr[], int n, int k) {
    deque<int> q;

    //Process first Window of size k
    for(int i=0;i<k;i++) {
        if(arr[i]<0){
            q.push_back(i);
        }
    }

    //Process the Reamaining Windows-> IMPORTANRT PROCESS
    for(int i =k;i<n;i++) {
        //answer of older window
        if(q.empty()) {
            cout<<0<<" ";
        }
        else {
            cout<<arr[q.front()]<<" "; 
        }
        //Remove out of window elements
        while(i-q.front()>=k && !q.empty()) {
             q.pop_front();
        }
        //check current element foer insertion

        if(arr[i]<0) {
            q.push_back(i);
        }


        }

        //print answer for last window
        if(q.empty()) {
            cout<<0<<" ";
        }
        else {
            cout<<arr[q.front()]<<" ";
        }

}

int main() {
    int arr[]={12,-1,-7,8,-15,30,16,28};
    int size=8;

    int k=3;

    solve(arr,size,3);


    return 0;
}