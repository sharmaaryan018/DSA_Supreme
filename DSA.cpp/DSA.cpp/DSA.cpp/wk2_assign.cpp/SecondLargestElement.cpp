
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int max=INT_MIN;
    int min=INT_MAX;
    int largest;
    int smallest;

    for(int i=0;i<n;i++) {
        if(a[i]>max) {
            max=a[i];
        }
        if(a[i]<min) {
            min=a[i];
        }
    }
    largest=max;
    smallest=min;

       max=INT_MIN;
       min=INT_MAX;
    for(int i=0;i<n;i++) {
        if(a[i]>max && a[i]<largest) {
            max=a[i];
        }
        if(a[i]<min && a[i]>smallest){
            min=a[i];
        }
    }
    largest=max;
    smallest=min;
    vector<int> result = {largest, smallest};
     return result;
 }




// vector<int> getSecondOrderElements(int n, vector<int> a) {
//     int max = INT_MIN;
//     int min = INT_MAX;
//     int largest;
//     int smallest;

//     for (int i = 0; i < n; i++) {
//         if (a[i] > max) {
//             max = a[i];
//         }
//         if (a[i] < min) {
//             min = a[i];
//         }
//     }
//     largest = max;
//     smallest = min;

//     max = INT_MIN;
//     min = INT_MAX;

//     for (int i = 0; i < n; i++) {
//         if (a[i] > max && a[i] < largest) {
//             max = a[i];
//         }
//         if (a[i] < min && a[i] > smallest) {
//             min = a[i];
//         }
//     }

//     largest = max;
//     smallest = min;

//     // Now, you should return the results as a vector.
//     vector<int> result = {largest, smallest};
//     return result;
// }
