#include<iostream>
#include<unordered_map>
using namespace std;

int main() {

    string str = "thiruvananthanpuram";
    unordered_map<char,int> freq;

    for(int i=0;i<str.length();i++) {
        char ch;
        ch=str[i];
        freq[ch]++;
    }

    for( auto i:freq) {
        cout<< i.first<<"->"<<i.second<<endl;
    }
}