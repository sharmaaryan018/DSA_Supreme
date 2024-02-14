#include<iostream>
#include<vector>
using namespace std;

int main() {
    //create vector
    vector<int>arr;

   // int ans=(sizeof(arr)/sizeof(int));
   // cout<<ans<<endl;
    //insert elements
    arr.push_back(5);
    arr.push_back(7);

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    //print
    for(int i=0;i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //remove element
      arr.pop_back();

         for(int i=0;i<arr.size();i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int n;
    cout<<"enter the value of n "<<endl;
    cin>>n;
    vector<int>brr(n,10);
    cout<<"size of b  "<<brr.size()<<endl;
    cout<<"capacity of b  "<<brr.capacity()<<endl;

    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
  cout<<endl;

    vector<int> crr{10,20,30,40};

    for(int i=0;i<crr.size();i++) {
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    cout<<"vector is empty or not "<< crr.empty()<<endl;

    vector<int>drr;
        cout<<"vector is empty or not "<< drr.empty()<<endl;


    return 0;
}