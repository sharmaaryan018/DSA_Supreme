/*#include<iostream>
using namespace std; 

bool checkKey(string str,int i, int n,char key) {
    //base case
    if(i>=n) {
        return false;
    }
    //1 case solved
    if(str[i]==key){
        cout<<"found at: "<<i<<endl;
        //return true;
        //to return index 
        //return i;
    }
    //rest will be done by recursion
     return checkKey( str,i+1,n,key);
}

int main() {
    string str="lovebabbar";
    int n=str.length();

    char key='b';

    int i=0;
    bool ans=checkKey(str,i,n,key);

    cout<<"answer is: "<<ans<<endl;
    return 0; 
}*/

//STORE ANS IN ARRAY 


/*#include<iostream>
#include<vector>
using namespace std; 

void checkKey(string str,int i, int n,char key, vector<int>&ans) {
    //base case
    if(i>=n) {
        return ;
    }
    //1 case solved
    if(str[i]==key){
        //STORE IN VECTOR
        ans.push_back(i);
        //cout<<"found at: "<<i<<endl;
        //return true;
        //to return index 
        //return i;
    }
    //rest will be done by recursion
     return checkKey( str,i+1,n,key,ans);
}

int main() {
    string str="lovebabbar";
    int n=str.length();

    char key='b';

    int i=0;

    vector<int>ans;
    checkKey(str,i,n,key,ans);

    // cout<<"answer is: "<<ans<<endl;

    cout<<"Printing Stored Answers: "<<endl;

    for(auto val: ans) {
        cout<< val <<" ";
    }
    cout<<endl;
    return 0; 
}*/


// FREQUENCY COUNT
// reference variable is used to store no. of counts 

#include<iostream>
#include<vector>
using namespace std; 

void checkKey(string str,int i, int n,char key, int&  count) {
    //base case
    if(i>=n) {
        return ;
    }
    //1 case solved
    if(str[i]==key){
        count++;
        //STORE IN VECTOR
       //ans.push_back(i);
        //cout<<"found at: "<<i<<endl;
        //return true;
        //to return index 
        //return i;
    }
    //rest will be done by recursion
     checkKey( str,i+1,n,key,count);
}

int main() {
    string str="lovebabbar";
    int n=str.length();

    char key='b';

    int i=0;

   // vector<int>ans;
   int count=0;
    checkKey(str,i,n,key,count);

    cout<<count<<endl;

    // cout<<"answer is: "<<ans<<endl;

    /*cout<<"Printing Stored Answers: "<<endl;

    for(auto val: ans) {
        cout<< val <<" ";
    }
    cout<<endl;*/
    return 0; 
}