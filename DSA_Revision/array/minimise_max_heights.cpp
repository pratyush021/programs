#include<bits/stdc++.h>
using namespace std;
void print(int arr[], int n) {
	for(int i = 0; i< n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}
int getMinDiff(int arr[], int n, int k) {
	//minimize heights 1 
	int sum = 0;
	for(int i =0; i< n; i++) {
		sum += arr[i];
	}
	int avg = sum / n;
	for(int i = 0; i < n; i++) {
		
	}
	return arr[n-1]-arr[0];
}
int main() {
	int n, k;
	cin >> k >> n;
	int arr[n];
	for(int i=0; i<n;i++) {
		cin >> arr[i];
	}
	cout << getMinDiff(arr, n, k) << endl;
	return 0;
}
