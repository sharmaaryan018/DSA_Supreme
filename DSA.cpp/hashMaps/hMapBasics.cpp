#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    //creation
    unordered_map<string,int> m;

    //insertion
    pair<string,int> p = make_pair("scorpio",6);
    m.insert(p);

        pair<string,int> p2("bmw",8);
    m.insert(p2);

    m["ferrari"]=10;

    //access
   cout<< m.at("scorpio")<<endl;
   cout<<m["bmw"]<<endl;
   cout<<m["ferrari"]<<endl;

   //searching

   cout<< m.count("bmw")<<endl;
   cout<< m.count("alto")<<endl;

   if(m.find("ferrari")!=m.end()) {
    cout<<"Ferrari found"<<endl;
   }else {
    cout<<"Ferrari not found"<<endl;
   }

   //find size
   cout<<m.size()<<endl;
    cout<<m["alto"]<<endl;
    cout<<m.size()<<endl;

    //Printing all the enteries

    cout<<"Printing all the enteries"<<endl;
    for (auto i:m) {
        cout<<i.first<<"->"<<i.second<<endl;
    }

 

    return 0;
}