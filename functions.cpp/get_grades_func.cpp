#include<iostream>
using namespace std;
char getgrade( char marks){
    if(marks>=90)
    return 'A';
    else if(marks>=80)
    return 'B';
    else if(marks>=70)
    return 'C';
     else if(marks>=50)
    return 'D';
    else
    return 'E';

}

int main() {
    int marks;
    cin>>marks;
    char finalgrade=getgrade(marks);
    cout<<"result is  "<<finalgrade<<endl;

}
//we can also use switch case here  