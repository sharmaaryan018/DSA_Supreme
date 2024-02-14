class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int> ans1(2,-1);
    if(nums.size()==0)return ans1;
    int t1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    int t2=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
    if(t1==t2)return ans1;
    cout<<t1<<t2;
    ans[0]=t1;
    ans[1]=t2-1;
    return ans1;
    }
};