/*class Solution{
public:

    int countPrimes(int n) {
        
        if(n==0) return 0;

        vector<bool> prime(n+1, true);
        // all are prime marked already

        prime[0]=prime[1]=false;

        int ans=0;

        for(int i=2;i<n;i++) {
            if(prime[i]) {
                ans++;

                int j=2*i;
                while(j<n){
                    prime[j]=false;
                    j+=i;
                }
            }
        }
        return ans;
    }

};*/


//MORE OPTIMISED CODE

#include<iostream>
#include<vector>
using namespace std;

vector<bool>Sieve(int n) {
    vector<bool>sieve(n+1, true);

    sieve[0]=sieve[1]=false;

    for(int i =2;i<n;i++) {
        if(sieve[i]==true) {
            int j=i*i;

            while(j<=n) {
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}

int main() {
    vector<bool>sieve=sieve(25);
        for(int i=0;i<=25;i++) {
            if(sieve[i]) {
                cout<<i<<" ";
            }
        }
    }



