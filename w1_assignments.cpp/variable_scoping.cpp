#include<iostream>
using namespace std;

int global_variable =420;


int main()  {
    int b=5;                //this b is a local variable of main function
    b=7;                   //updated value

    /*int b=11;      */       //value cannot be redefined
    cout<< global_variable<<endl;
    if(true) {
        int b=10;        //this b is a local variable of if condition
        cout<<b<<endl;
        cout<< global_variable<<endl;
    }

    cout<<b<<endl;
}