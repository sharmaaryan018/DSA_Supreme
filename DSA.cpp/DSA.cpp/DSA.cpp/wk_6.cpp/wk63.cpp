#include<iostream>
using namespace std;

int main() {
    char *ptr;
    char str[]="abcdefgh";
    ptr=str;
    ptr +=5;
    cout<<ptr;
    return 0;
}