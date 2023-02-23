#include<iostream>
using namespace std;

int solve(int dividend, int divisor) {
    int s=0;
    int e=dividend;
    int ans=0;
    int mid=s+(e-s)/2;

    while(s<=e) {
        //for perfect solution
        if(mid*divisor==dividend) {
            return mid;
        }
            //not perfect sol
        if(mid*divisor>dividend) {
            e=mid-1;
        }
        else {
            //store the ans
            ans=mid;
            //right search
            s=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main() {
    int dividend=22;
    int divisor=7;
    
    int ans=solve(dividend,divisor);
    cout<<"Ans is "<<ans<<endl;
    return 0;

}