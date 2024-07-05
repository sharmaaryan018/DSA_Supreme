class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int hash[256]={0};//Mapping each char of 's' to 't'
        bool istcharisMapped[256]={0};//stores if t[i] is mapped with s[i]

        for(int i=0;i<s.size();i++){
            if(hash[s[i]]==0 && istcharisMapped[t[i]]==0) {
                hash[s[i]]=t[i];
                istcharisMapped[t[i]]=true;
            }
        }
        for(int i=0;i<s.size();i++) {
            if( char(hash[s[i]]) != t[i] ){
                return false;
            }
        }
        return true;
        
    }
};