#include<bits/stdc++.h>
using namespace std;
int get_max(int arr[], int n, int start, int end) {
	int max = arr[end];
	for(int i = start; i < end; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}
int trappingWater(int arr[], int n){
    int right, left;
    int sum = 0;
    for(int i = 0; i < n; i++) {
    	left = get_max(arr, n, 0, i);
    	right = get_max(arr, n, i+1, n);
    	sum += (min(left, right) - arr[i]);
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

