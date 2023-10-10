class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        //kitna petrol kam pdgaya
        int  deficit =0;
        //kitna petrol left
        int balance =0;
        //circuit kaha se start kr re ho
        int start=0;

        for(int i=0;i<gas.size(); i++) {
            balance += gas[i]-cost[i];

            if(balance<0) {
                //yahi pr galti hogi
                deficit += balance;
                start= i+1;
                balance =0;
            }
        }
        if(deficit + balance >=0) {
            return  start;
        }
        else {
            return -1;
        }
    }
};