#include<bits/stdc++.h>
using namespace std;
int trappingWater(int arr[], int n){
    //left[i] contains height of the tallest bar to the left including ith bar itself
    int left[n];

    int right[n];
    int water = 0;

    //filling the left array
    left[0] = arr[0];
    for(int i = 1; i < n; i++) {
      left[i] = max(left[i-1], arr[i]);
    }
    //filling the right array
    right[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--) {
      right[i] = max(right[i+1], arr[i]);
    }
    for(int i = 0; i < n; i++) {
      water += min(left[i], right[i])-arr[i];
    }
    return water;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin >> arr[i];
	}
	cout << trappingWater(arr, n) << endl;
	return 0;
}
/*
input:
6
3 0 0 2 0 4
*/
