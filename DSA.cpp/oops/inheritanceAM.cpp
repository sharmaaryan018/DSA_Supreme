#include<iostream>
using namespace std;

class Animal{
    private:
    int age;
};

class dog:public Animal{
    public:
    void print(){
        cout<<this->age;
    }
}

int main(){
    dog d1;
    d1.print();

    return 0;
}