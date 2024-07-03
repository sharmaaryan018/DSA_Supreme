#include<iostream>
using namespace std;

int main() {
 /*   int arr[4]={12,13,16,5};

    cout<< arr <<endl;
    cout<< arr[0] <<endl;
    cout<< &arr <<endl;
    cout<< &arr[0] <<endl;

    int* p=arr;
    cout<< p <<endl;
    cout<< &p <<endl;

    cout<< *arr <<endl;
    cout<<*arr+1<<endl;*/

    /*int arr[10];
    cout<< sizeof(arr)<<endl;

    int* p=arr;

    cout<<sizeof(p)<<endl;
    cout<<sizeof(*p)<<endl;*/


    /*char ch[10]="Babbar";
    char* c=ch;
    cout<< ch <<endl;
    cout<< &ch <<endl;
    cout<< ch[0] <<endl;

    cout<< &c <<endl;
    cout<< *c <<endl;
    cout<< c <<endl;*/

    /*char ch ='k';
    char* cptr = &ch;

    cout<< cptr <<endl;

    return 0;*/

    char name[10]= "babbar";
    cout<< name <<endl;

    char*c = "babbar";//BAD PRACTICE because string is stored in temporary storage
    cout<< c <<endl;
}