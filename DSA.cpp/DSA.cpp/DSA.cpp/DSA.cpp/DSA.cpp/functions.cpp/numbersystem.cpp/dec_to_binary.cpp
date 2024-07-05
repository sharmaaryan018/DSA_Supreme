#include<iostream>
#include<cmath>
using namespace std;

int decimal_to_binary(int n) {
    int binaryno=0;
    int i=0;
    while(n>0) {
        int bit=n%2;
        binaryno=bit*pow(10,i++) + binaryno;
        n=n/2; 
    }
    return binaryno;
}

int main() {
    int n;
    cin>>n;
    int binary=decimal_to_binary(n);
    cout<<"binary conversion of  "<<n<<" is "<<binary<<endl;
}