#include<bits/stdc++.h>
using namespace std;
int trappingWater(int arr[], int n){
    int right, left;
    int sum = 0;
    for(int i = 0; i < n; i++) {
    	left = arr[i];
	for(int j = 0; j < i; i++) {
		left = max(arr[i], left);
	}
	right = arr[i];
	for(int j = i + 1; j < n; j++) {
		right = max(arr[i], right);
	}
	sum += (max(right, left) - arr[i]);
    }
    if(sum < 0) {
    	sum = 0;
    }
    return sum;
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

