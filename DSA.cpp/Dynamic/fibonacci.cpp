//RECURSIVE SOLUTION
class Solution {
public:
    int fib(int n) {
        if(n==0||n==1) {
            return n;
        }
        int ans = fib(n-1)+fib(n-2);
        return ans;
    }
    
};




//DP SOLUTIONS
//Recursion+Memoisation
int topDownSolve(int n, vector<int> &dp) {
    //base case
    if(n==0||n==1) {
            return n;
        }
        if(dp[n] !=-1) {
            return dp[n];
        }
        dp[n] = topDownSolve(n-1,dp)+topDownSolve(n-2,dp);
        return dp[n];
}
  


//BottomUp

int BottomUpSolve(int n) {
    //step1-> create dp Array
    vector<int> dp(n+1,-1);
    //step2-> Observe base case in above sol
    dp[0]=0;
    if(n==0) {
        return dp[0];
    }
    dp[1]=1;

    for(int i=2;i<=n;i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

  int fib(int n) {
        // vector<int> dp(n+1,-1);
        // int ans= topDownSolve(n,dp);
        // return ans;
    return  BottomUpSolve(n);

        }