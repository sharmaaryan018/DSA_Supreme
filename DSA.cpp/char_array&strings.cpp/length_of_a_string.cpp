#include<iostream>
#include<string.h>
using namespace std;


    int getlength(char name[]) {

        int length=0;
        int i=0;

        while(name[i] != '\0') {
            length++;
            i++;
        }
        return length;

    }

    
int main() {
    char name[100];
    cin>>name;

    cout<<"Length of a String is: "<<getlength(name)<<endl;;
   

    cout<<"length is : "<< strlen(name) <<endl;

    return 0;
}