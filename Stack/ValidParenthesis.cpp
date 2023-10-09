class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.length();i++) {
            char ch = s[i];

            //opening bracket
            if(ch=='(' || ch=='{' || ch=='[') {
                st.push(ch);
            } 
            else {
                //closing brackets
                if(!st.empty()) {
                    char topCh = st.top();
                    if(ch == ')' && topCh== '(') {
                        //matching brackets
                        st.pop();
                    }
                    else if(ch == '}' && topCh== '{') {
                        //matching brackets
                        st.pop();
                    }
                      else if(ch == ']' && topCh== '[') {
                        //matching brackets
                        st.pop();
                    }
                    else {
                        return false;
                    }
                }

            }
        }
        if(st.empty()) {
            return true;

        }
        else {
            return false;
        }
    }
};