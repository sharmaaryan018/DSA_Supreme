#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>>v
) {
    int rows=v.size();
    int cols=v[0].size();

    for(int startCol=0;startCol<cols;startCol++) {

        if((startCol & 1) == 0) {
            for(int i=0;i<rows;i++) {
                cout<<v[i][startCol]<<" ";
            }
        }
    
    else {
       for(int i=rows-1;i>=0;i--) {
        cout<<v[i][startCol]<<" ";
       }
    }
}
}

int main() {

    vector<vector<int>>v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    wavePrintMatrix(v);
    return 0;

}