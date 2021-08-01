#include<bits/stdc++.h>
using namespace std;
int maxProfit(int arr[], int n) {
	int sub = 0, profit =0 ;
	for(int i= 1; i < n; i++) {
		sub = arr[i] - arr[i-1];
		if(sub > 0) {
			profit += sub;
		}
	}
	return profit;
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i =0; i < n; i++) {
		cin >> arr[i];
	} 
	cout << maxProfit(arr, n) << endl;
	return 0;
}