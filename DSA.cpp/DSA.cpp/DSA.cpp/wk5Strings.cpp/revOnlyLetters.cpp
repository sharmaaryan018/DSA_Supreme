class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0,h=s.size()-1;
        while(l<h) {
 //           if(isaplha(s[l]) && isalpha(s[h])) 
 if (( s[l]&&s[h]>=97 && s[l]&&s[h]<=122 ) || ( s[l]&&s[h]>=65 &&s [l]&&s[h]<=90 )){
                swap(s[l], s[h]);
                l++;
                h--; 
            }
            else if(!isalpha(s[l]))  {
                l++;
            }
            else{
                h--;
            }
        }
        return s;
    }
};