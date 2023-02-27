 #include<iostream>
 #include<string>
 using namespace std;

    bool compareString(string a, string b) {
        if((a.length())!=b.length()) {
            return false;
        }
       
            for(int i=0; i<a.length(); i++) {
                if(a[i]!= b[i]) {
                    return false;
                }
            }
        return true;
    }

 int main() {

 /*string str;
 cin>>str;

 cout<<str;

 cout<<"lenght: "<<str.length()<<endl;
  cout<<"isEmpty: "<<str.empty()<<endl;
  str.push_back('z');
  cout<<str<<endl;
  str.pop_back();
  cout<<str<<endl;
  cout<<str.substr(0,6)<<endl;


 string a = "love";
 string b =  "lover";

 if(a.compare(b)==0) {
    cout<<"a and b are exactly same strings "<<endl;
 }
    else {
        cout<<"a and b are not same"<<endl;
    }

    string x="bzcd";
    string y="bcda";

    cout<<x.compare(y)<<endl;

    string sentence = "hii everyone howww";
    string target= "hello";

    //cout << sentence.find(target);

    if(sentence.find(target)==string::npos) {
        cout<<"not found"<<endl;
    }*/
   //  string str="This is my First Message";
     //string word = "aryan";

  //   str.replace(11,5,"second");
  //   cout<<str<<endl;

    string str="aryugvbdnbshatrma";
    str.erase(10,10);
    cout<<str;

 return 0;    
 }