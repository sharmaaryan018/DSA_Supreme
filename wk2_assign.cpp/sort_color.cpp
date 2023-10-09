class Solution {
public:
    void sortColors(vector<int>& nums) {
        /*int zeros, ones, twos;
        zeros=ones=twos=0;

        for(int i=0;i<nums.size();i++) {
            if(nums[i]==0) {
                zeros++;
            }
            else if(nums[i]==1) {
                ones++;
            }
            else {
                twos++;
            }
        }

        int i=0;
        while(zeros--) {
            nums[i]=0;
            i++;
        }
          while(ones--) {
            nums[i]=1;
            i++;
        }
          while(twos--) {
            nums[i]=2;
            i++;
        }*/

//-------------//THREE POINTER APPROACH//--------------//

        int l=0,m=0,h=nums.size()-1;

        while(m<=h) {
            if(nums[m]==0) {
                swap(nums[l],nums[m]);
                l++,m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else {
                swap(nums[m],nums[h]);
                h--;
            }
        }
    }
};