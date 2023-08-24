class Solution {
    public:
    string longestCommonPrefix(vector<string>& strs) {
    string ans = "";

    if (strs.empty()) {
        return ans;
    }

    //for traversing all the characters of first string
    for (int i  = 0; i < strs[0].length(); i++) {
        char ch = strs[0][i];
        bool match = true;

        //for comparing ch with rest other strings
        for (int j = 1; j < strs.size(); j++) {
            //not match
            if (i >= strs[j].size() || ch != strs[j][i]) {
                match = false;
                break;
            }
        }

        if (match == false) {
            break;
        } else {
            ans.push_back(ch);
        }
    }
    return ans;
    }
};