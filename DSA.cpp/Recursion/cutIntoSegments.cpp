#include<iostream>
#include<imits.h>
usnig namespace std;

int solve(int n, int x, int y, int z) {
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN:
    }
        a=solve(n-x,x,y,z)+1;
  
        b=solve(n-y,x,y,z)+1;
   
        c=solve(n-z,x,y,z)+1;
    
    int ans=max(a,max(b,c));
    return ans;
}

int main() {
    int n=7;
    int x=5;
    int x=2;
    int z=2;

    int ans=solve(n,x,y,z);
    if(ans<0) 
    ans=0;

    cout<<"Answer is : " <<ans<<endl;
    return 0;
}