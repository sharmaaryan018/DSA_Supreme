/*#include<iostream>
using namespace std;

class A{
    public: 
    int physics;
};

class B{
    public: 
    int chemistry;
};

class C: public A, public B{
    public:
    int maths;
};

int main(){
    C obj;
    cout<<obj.physics<<" "<<obj.chemistry<<" "<<obj.maths<<endl;

}*/


//IN CASE OF SAME NAME DATA MEMEBERS IN BOTH CLASS A AND B -> DIAMOND PROBLEM

#include<iostream>
using namespace std;

class A{
    public: 
    int chemistry;
    A(){
        chemistry=100;
    }
};

class B{
    public: 
    int chemistry;
    B(){
        chemistry=200;
    }
};

class C: public A, public B{
    public:
    int maths;
};

int main(){
    C obj;
    cout<<" "<<obj.A::chemistry<<" "<<obj.B::chemistry<<" "<<obj.maths<<endl;

}