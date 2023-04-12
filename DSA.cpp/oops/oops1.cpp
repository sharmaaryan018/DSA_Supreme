 #include<iostream>
 using namespace std;

class Animal {
    //state or properties
    private:
    int weight;

    public:
    int age;
    string name;

   //behaviour or functions
    void eat() {
        cout<<"Eating"<<endl;
    }

    void sleep() {
         cout<<"sleeping"<<endl;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int w){
        weight=w;
    }

};

 int main(){

    //Object creation

    //static
    Animal ramesh;

    ramesh.age=12;
    ramesh.name="zippuy"; 
    cout<<"Age of Animal is:   "<< ramesh.age<<endl;
    cout<<"Name of Animal is:   "<< ramesh.name<<endl;

    ramesh.eat();
    ramesh.sleep();

    ramesh.setWeight(101);
    cout<<"weight is: "<<ramesh.getWeight()<<endl;

    //Dynamic Memory
    Animal* suresh= new Animal;

    (*suresh).age=15;
    (*suresh).name="billi";

    //Altername-> dynamic
    suresh->age=17;
    suresh->name="billi";

    cout<<" suresh age is: "<< suresh->age<<endl;
    suresh->eat();
    suresh->sleep(); 

    return 0;
 }