#include<iostream>
using namespace std;
class Maths{
public:

    int sum(int a, int b){
        cout<<"I M IN FIRST SIGNATURE"<<endl;
        return a+b;
    }
    int sum(int a, int b, int c){
        cout<<"I M IN 2ND SIGNATURE"<<endl;
        return a+b+c;
    }
    int sum(int a, float b){
        cout<<"I M IN 3RD SIGNATURE"<<endl;
        return a+b;
    }
};

int main(){
    
Maths obj;

    cout<<obj.sum(2,6)<<" "
    <<obj.sum(2,7,8)<<" "
    <<obj.sum(4,4.2f)<<endl;
    return 0;
}