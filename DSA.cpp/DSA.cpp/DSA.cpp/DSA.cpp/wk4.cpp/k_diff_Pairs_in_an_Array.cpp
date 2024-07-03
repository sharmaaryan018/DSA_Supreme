// TWO POINTER APPROACH
/*class Solution {
public:
    int findPairs(vector<int>& nums, int k){
        sort(nums.begin(), nums.end());
        set<pair<int,int>> ans;
        int i=0,j =1;

        while(j<nums.size()) {
            int diff =nums[j]-nums[i];
            if(diff==k) { 
                ans.insert({nums[i], nums[j]});
                i++,j++;
            }
            else if(diff>k){
                i++;
            }
            else{
                j++;
            }
            if(i==j)
            j++;
        }
        return ans.size();
    }
};  */

// USIng BINary Search

class solution  {
public:

        int bs(vector<int>&nums, int start){
            int end=nums.size()-1;
            while(start<=end) {
                if(nums[mid]==x){
                    return mid;
                }
                else if(x>mid+1) {
                    start=mid+1;
                }
                else {
                    end=mid-1;
                }
            }
            return -1;
        }

        int findPairs(vector<int>& nums, int) {
            sort(nums.begin(), nums.end());
            set<pair<int, int>>ans;{
            for(int i=0;i<nums.size();i++) {
                if(bs(nums, i+1,a[i]+k)!= -1) {
                    ans,insert(a[i], a[i]+k);
                }
            }              
            return ans.size();
            }
        }
};