//copy by value
#include<iostream>
using namespace std;
/*int add(int x, int y){
    int result=x+y;
    return result;
}*/
int add(int a, int b){
    int result=a+b;
    return result;
}

int main() {
    int a;
    cin>>a;
    int b;
    cin>>b;
   int sum = add(a,b);

   cout<<"sum is : "<< sum <<endl;
   return 0;
}