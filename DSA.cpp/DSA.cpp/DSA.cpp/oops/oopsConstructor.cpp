 #include<iostream>
 using namespace std;

class Animal {
    //state or properties
    private:
    int weight;

    public:
    int age;
    string name;

    // default constructor
    Animal(){
        this->weight=0;
        this->age=0;
        this->name="";
        cout<<"Constructor Called"<<endl;
    }

    //Parameterised Constructor
    Animal(int age){
        this->age=age;
        cout<<"Parameterised Constructor called "<<endl;
    }
    Animal(int age, int weight){
        this->age=age;
        this->weight=weight;
        cout<<"2nd Parameterised Constructor called "<<endl;
    }

     Animal(int age, int weight, string name){
        this->age=age;
        this->weight=weight;
        this->name=name;
        cout<<"3rd Parameterised Constructor called "<<endl;
    }

    //Copy Constructor
    Animal(Animal &obj){
        this->age = obj.age;
        this->weight= obj.weight;
        this->name=obj.name;
        cout<<"I m Inside the Copy Constructor"<<endl;
    }
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

    void print(){
        cout<< this->age <<" "<< this->weight<<" "<<this->name << endl;
    }

};

 int main(){

    //Object creation

    //static
   /* Animal ramesh;

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
    suresh->sleep(); */

    /*Animal c;
    Animal* d = new Animal();

     Animal a(100);
    Animal*b = new Animal(100);

     Animal e(100,200,"aryan");
    Animal* f= new Animal(100,200,"aryan");

    Animal k= a;
    Animal l(*b);
    Animal animal(c);*/

    Animal a;
    a.age=20;
    a.setWeight(101);
    a.name="babbar";

    Animal b=a;

    a.print();
    b.print();
 
    
    return 0;   
 }