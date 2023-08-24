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

        //for comparing ch with rest other stringss
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


class TrieNode {
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    int childCount;

    TrieNode(char d) {
        this->data=d;
        for(int i=0;i<26;i++) {
            children[i]=NULL;
        }
        childCount=0;
        this-> isTerminal=false;
    }
};




class Solution {
    public:
     
        void insertWord(TrieNode* root, string word) {
    cout<<"inserting  "<< word <<endl;
    //base case
    if(word.length()==0) {
        root-> isTerminal =true;
        return;
    }

    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;

    //Present
    if(root->children[index] != NULL) {
        child = root->children[index];
    }
    else {
        //not present
        child = new TrieNode(ch);
       root-> childCount++;
        root->children[index]= child;
    }
    //recursion will handle
    insertWord(child, word.substr(1));
}
    };

    
bool searchWord(TrieNode* root, string word) {
    //base case
    if(word.length()==0) {
        return root->isTerminal;
    }
    char ch = word[0];
    int index = ch-'a';
    TrieNode* child;

    //present
    if(root->children[index] != NULL) {
        child = root->children[index];
    }
    else {
        return false;
    }
    //recursive call
    return searchWord(child, word.substr(1));

    void findLCP(string first,string &ans,TrieNode* root) {
        //Here i will make MIstake
        if(root->isTerminal) {
            return;
        }
        for(int i=0;i<first.length();i++) {
            char ch= first[i];

            if(root->childCount == 1) {
                ans.push_back(ch);
                int index = ch -'a';
                root = root->children[index];
            }
            else
            break;

            if(root->isTerminal)
            break;
        }

    }

    string longestCommonPrefix(vector<string>& strs) {
        TrieNode* trie = new TrieNode('-');
        //INSERT STRINGS

        for(int i =0;i<strs.size();i++) {
            insertWord(root,string[i]);
        }
        string ans="";
        string first = strs[0];
        findLCP(first,ans,root);
        return ans;
}



};