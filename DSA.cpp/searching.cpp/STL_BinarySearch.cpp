#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    vector<int> v{2,3,4,5,7,9,10};

    if(binary_search(v.begin(), v.end(), 3)) {
        cout<<" Found"<<endl;
    }
    else {
        cout<<"NotFound"<<endl;
    }
    return 0;
}
/*FOR ARRAY 

  int arr[]={2,3,4,5,7,9,10};
  int size=7;

    if(binary_search(arr, arr+size, 3)) {
        cout<<" Found"<<endl;
    }
    else {
        cout<<"NotFound"<<endl;
    }
    return 0;
}
*/