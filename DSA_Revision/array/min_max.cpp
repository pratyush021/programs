#include<bits/stdc++.h>
using namespace std;
//find min and max of an array by making minimum number of comparison 
struct Pair{
    int min;
    int max;
};
struct Pair getMinMax(int arr[], int low, high) {
	
}
int main() {
    int arr[] = { 1000, 11, 445, 1, 0, 330, 3000 };
    int size = sizeof(arr)/sizeof(arr[0]);
    
    struct Pair minmax = getMinMax(arr, size);
    cout << "Maximum value is: " << minmax.max << " and minimum value is " << minmax.min << endl;
    return 0;
}
