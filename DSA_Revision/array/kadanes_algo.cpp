#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n) { 
	//brute force approch
	int min = arr[0];
	for(int i =0; i < n;i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	int max_so_far = min;
	int max = 0;
	for(int i = 0; i < n; i++) {
		max += arr[i];
		if(max > max_so_far) 
			max_so_far = max;
		if(max < 0) 
			max = 0;
	}
	return max_so_far;
}

int main() {
	int arr[] = {-1,-2,3,-2,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << maxSubarraySum(arr, n) << endl;
	return 0;
}
