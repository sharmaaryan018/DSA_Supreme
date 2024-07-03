/*#include<iostream>
using namespace std;

int main() {
    int n=5;
    for(int i=0; i<n; i++) {

        continue;  
        cout << "aryan" <<endl;
       
    }
 
}*/

///we use CONTINUE TO SKIP THE ITERATION 

#include<iostream>
using namespace std;

int main() {
    int n=5;
    for(int i=0; i<n; i++) {

        if(i==2)
        continue;  
        cout << "aryan" <<endl;
       
    }
 
}