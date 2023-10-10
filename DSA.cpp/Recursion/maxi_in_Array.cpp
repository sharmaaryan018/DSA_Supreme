#include<iostream>
#include<limits.h>
using namespace std;

//Pass by reference
//In pass by reference the value of maxi will be changed in the main function direclty whenever it is changed int the findMax function.
//in pass by value it wont be changed in main function but only in the maxi which ids defined in the function
void findMax(int arr[],int n, int i,int&  maxi) {
    //base case
    if(i>=n){
        return;
    }
    // 1 Case solve krna hai
    //Current element ko check kro

    
    if(arr[i]>maxi) {
        maxi=arr[i];
    }
    
    //Baki Recursion will handle
    findMax(arr,n,i+1,maxi);
}

void findMin(int arr[],int n, int i,int&  mini) {
    //base case
    if(i>=n){
        return;
    }
    // 1 Case solve krna hai
    //Current element ko check kro
  //  mini= min(mini, arr[i]);
    if(arr[i]<mini) {
        mini=arr[i];
    }
    //Baki Recursion will handle
    findMin(arr,n,i+1,mini);
}

int main() {

    int arr[]={6,20,30,45,32,58};
    int n=6;

    int maxi=INT_MIN;
    int mini=INT_MAX;

    int i=0;

    findMax(arr,n,i,maxi);
     findMin(arr,n,i,mini);

    cout<<"maximum number is: "<<maxi<<endl;
    cout<<"minimum number is: "<<mini<<endl;

    return 0;
}