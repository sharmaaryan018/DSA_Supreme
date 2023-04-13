#include<iostream>
using namespace std;

class car {
    public:
    int age;
    int weight;

    void speedUp(){
        cout<<"speeding up"<<endl;
    }
};

class scorpio:public car{

};


class fortuner:public car{

};

int main(){

scorpio s11;
s11.speedUp();

fortuner f11;
f11.speedUp();

    return 0;
}