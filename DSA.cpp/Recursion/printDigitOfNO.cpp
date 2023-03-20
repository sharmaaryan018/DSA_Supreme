 #include<iostream>
 using namespace std;

 void printDigit(int n) {
    //base case
    if(n==0) {
        return ;
    }
     
    // Rest Recusion sambal lega
    printDigit(n/10 );
    //solve 1 case
    int digit=n%10;
    cout<< digit<<" ";

 }

 int main() {
    int n=647;

    //if n is 0
    if(n==0) {
        cout<<0<<endl;
    }
    printDigit(n);
    
 }