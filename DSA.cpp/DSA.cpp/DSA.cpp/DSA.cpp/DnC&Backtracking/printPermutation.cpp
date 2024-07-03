#include<iostream>  
using namespace std;

void printPermutation(string &str, int i){
    //base case
    if(i>=str.length()){
        cout<<str<<" ";
        return;
    }
    //swapping 
for(int j=1;j<str.length();j++){
    //swap
    swap(str[i],str[j]);
    //rec Call
    printPermutation(str,i+1);
    //Backtracking- to recreate the original input
    //Why this-> ??
    swap(str[i],str[j]); 
}
}

int main(){
    string str= "abc";
    int i=0;
    printPermutation(str,i);
    return 0;
}