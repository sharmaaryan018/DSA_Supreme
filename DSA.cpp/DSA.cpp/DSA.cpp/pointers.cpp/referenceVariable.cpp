#include<iostream>
using namespace std;

int main() {
    int a=5;
    //CREATING A REFERENCE VARIABLE
    int& b=a;

    cout << a << endl;
    cout << b << endl;

    a++;
    
    cout << a << endl;
    cout << b << endl;

    return 0;
}