 #include<iostream>
 #include<string>
 using namespace std;

 int main() {

 string str;
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

 return 0;    
 }