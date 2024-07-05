/*#include<iostream>
using namespace std;

solve(int num) {
    num++;
}

int main() {

    int a=5;

    solve(a);

    cout<< a << endl;
    return 0;
}*/

//The output will be 5.
//This is called pass by value, in this value is copied.
//-------------------------------------



//This is pass by reference using Reference Variable.
/*
#include<iostream>
using namespace std;

solve(int& num) {
    num++;
}

int main() {

    int a=5;

    solve(a);

    cout<< a << endl;
    return 0;
}
*/


#include<iostream>
using namespace std;

void solve(int* val) {
    *val=*val+1;
}

int main() {

    int a=15;

    solve(&a);

    cout << a << endl;

 
    return 0;
}