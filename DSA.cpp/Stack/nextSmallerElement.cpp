#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevSmaller(vector<int> &v) {
    stack<int> s;
    s.push(-1);
    vector<int> ans(v.size());

    //left to right->prev smaller
        for(int i=v.size()-1; i>=0 ; i--) {
        int curr = v[i];
        //answer in stack
        while(s.top() >= curr) {
            s.pop(); 
        }
        
        ans[i]=s.top();
        s.push(curr);   
     }

     return ans;

}
   

vector<int> nextSmaller(vector<int> &v) {
     vector<int> ans(v.size());

     for(int i=v.size()-1;i>=0; i--) {
        int curr = v[i];
        //answer in stack
        while(s.top() >= curr) {
            s.pop(); 
        }
        
        ans[i]=s.top(); 
        s.push(curr);   
     }
    return ans;
}

int main() {

     vector<int> v;
     v.push_back(2);
     v.push_back(1);
     v.push_back(4);
     v.push_back(3);

    vector<int> ans1 = nextSmaller(input);

     cout<<"printing"<<endl;
        for(int i=0; i<ans.size(); i++) { 
            cout<< ans[i]<<" ";    
        cout<<endl;
     }

       

     cout<<"printing"<<endl;
      vector<int> ans2 = prevSmaller(input);
        for(int i=0; i<ans.size(); i++) {
            cout<< ans2[i]<<" ";
        
        cout<<endl;
     }

    return 0;
}