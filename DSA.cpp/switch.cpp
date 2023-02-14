#include<iostream>
using namespace std;

int main() {
    int val;
    cout<<"enter the value"<<endl;

    cin>>val;

    switch(val) {
        case 1: cout<<"Aryan";
        break;
         case 2 : cout<<"Harsh";
       break;
         case 3: cout<<"Pandu";
        break;
         case 4: cout<<"Udhay";
        break;
         default : cout<<"Sujal"; 
    }
}