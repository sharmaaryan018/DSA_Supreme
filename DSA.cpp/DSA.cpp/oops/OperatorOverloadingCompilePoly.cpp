#include<iostream>
using namespace std;

class Param{
    public:
    int val;

    void operator+(Param &obj2){
            int value1=this->val;
            int value2=obj2.val;
            cout<<(value2-value1)<<endl;
    } 
};

int main(){
    param object1, object2;

    object1.val=7;
    object2.val=2;

    //this shouls print the difference between them
    object1+object2;
    return 0;
}