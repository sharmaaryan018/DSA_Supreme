class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        
        //for traversing all thr characyers of first string
        for(int i=0; i <strs[0].length();i++) {
            char ch= strs[0][i];
            bool match=true;

            //for comparing ch with rest other strings

            for(int j=1;j<strs[j].length();j++) {
                //not match
                if(strs[j].size()<i || ch!=strs[j][i]) {
                    match=false;
                    break;
                }
            }

                if(match == false)
                break;
                else
               ans.push_back(ch); 
    }
    return ans;
    }
};