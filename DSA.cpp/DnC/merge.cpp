 #include<iostream>
 using namespace std;

 void merge(int *arr, int s,int e){
   int mid=(s+e)/2; 

   int len1= mid - s + 1;
   int len2= e-mid;

   //creation of two dynamic Arrays
    int* left= new int[len1];
    int* right= new int[len2];


    //Copy Values

    //copy the values in left array
    int k=s;
    for(int i=0;i<len1;i++){
       left[i]= arr[k];
       k++;
    }

    //copy the values in right array
     k=mid+1;
    for(int i=0;i<len2;i++){
       right[i]= arr[k];
       k++;
    }

    //merge logic -> Merge of left and right Array
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex=s;

    while(leftIndex<len1 && rightIndex<len2){
      if(left[leftIndex]<right[rightIndex]) {
        arr[mainArrayIndex++]=left[leftIndex++];
        
      }
      else {
        arr[mainArrayIndex++]=right[rightIndex++];
       
      }
    }
    //Copy Logic for left Array
    while(leftIndex<len1){
        arr[mainArrayIndex++]=left[leftIndex++];
    }

     //Copy Logic for right Array
    while(rightIndex<len2){
        arr[mainArrayIndex++]=right[rightIndex++];
    }
 }

 void mergeSort(int *arr,int s,int e) {
    //base case
    //s==e-> single element
    //s>e->invalid array
    if(s>=e)
    return;

    //Sorting of left part
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);

     //Sorting of right part
    mergeSort(arr,mid+1,e);

    //now merge both the Sorted Arrays
    merge(arr,s,e);

    //TODO-> DELETE LEFT AND RIGHT ARRAY

 }

 int main() {
    int arr[]={4,5,13,6,2,9,3,6};
    int n=8;

    int s=0;
    int e=n-1;
    mergeSort(arr,s,e);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    cout<<endl;

    return 0;
 } 