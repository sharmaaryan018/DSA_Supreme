 #include<iostream>
 using namespace std;

 int main() {
    int arr[8]={2,4,5,8,7,23,56,77};
    int size=8;

    int start=0;
    int end=size-1;

    while(start<=end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
 }