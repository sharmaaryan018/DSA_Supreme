#include<iostream>
using namespace std;

int main() {
    int n;
     int i;
    cin>>n;

    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i-1;j++) {
            cout<<" ";   
        }

          for(int j=0; j<2*i+1 ;j++){
       if(j==0){
        cout<<"    *";
       } 
      else if(j==2*i){
        cout<<" * ";
       }
       else {
        cout<<" ";
       } 
       cout<<endl;
          }
          for(int i=0;i<n;i++){
            for(int j=0;j<i;j++) {
                cout<<" ";
            }

    for(int j=0; j<2*i-1 ;j++){
        if(j==0||j==2*n-2*i-2) {
            cout<<"*";
        
        }else {
            cout<<" ";
        }
        
       }
      
          }
           cout<<endl;
}
}