#include<iostream>
using namespace std;

class TrieNode {
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char d) {
        this->data=d;
        for(int i=0;i<26;i++) {
            children[i]=NULL;
        }
        this-> isTerminal=false;
    }
};

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
        root->children[index]= child;
    }
    //recursion will handle
    insertWord(child, word.substr(1));
}

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
}

vector<vector<string> > getSuggestions(TrieNode* root, string input) {
     TrieNode* prev = root;
     vector<vector<string>> output;

     for(int i=0;i<input.length();i++) {
        char lastch = input[i];
        int index = lastch-'a';
        TrieNode* curr = prev->children[index];

        if(curr == NULL)
        break;

        else {
            //store all suggestions
            vector<string> temp;
            storeSuggestions()
        }
     }

}

int main() {

    vector<string> v;
    v.push_back("love");
    v.push_back("lover");
    v.push_back("loving");
    v.push_back("last");
    v.push_back("lost");
    v.push_back("lane");
    v.push_back("lord");

    string input = "lovi";

    TrieNode* root = new TrieNode('-');
    for(int i=0;i<v.size();i++) {
        insertWord(root, v[i]);
    }

    vector<vector<string>> ans= getSuggestions(root,input);

    cout<<"Printing the answer: "<<endl;

    for(int i=0;i<ans.size();i++) {
        for(int j=0;j<ans[i].size();j++) {
            cout<<ans[i][j]<<", ";
        }
        cout<<endl; 
    }

    // TrieNode* root = new TrieNode('-');

    // insertWord(root, "coding");
    //  insertWord(root, "coder");
    //   insertWord(root, "codhelp");
    //    insertWord(root, "baba");
    //     insertWord(root, "babay");
    //      insertWord(root, "babu");

    //      if(searchWord(root,"cod")) {
    //         cout<<"present"<<endl;
    //      }
    //      else {
    //         cout<<"absent"<<endl;
    //      }
    return 0;
}