#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
//BRUTE FORCE 
// int getPairsCount(int arr[], int n, int k) { 
// 	int count = 0;
// 	for(int i = 0; i < n; i++) {
// 		if(arr[i] <= k) {
// 			for(int j = 0; j < n && j != i; j++) {
// 				if(arr[i]+arr[j] == k){
// 					count++;
// 					// cout << arr[i] << " " << arr[j] << endl;
// 				}

// 			}
// 		}
// 	}   
// 	return count; 
// }


//HASH MAP 

int getPairsCount(int arr[], int n, int k) {
	unordered_map<int, int> m;
	int max = arr[0], count = 0;
	for(int i = 0; i < n; i++){
		m[arr[i]]++;
		if(max < arr[i])
			max = arr[i];
	}
	for(int i = 0; i < n; i++) {
		count = count + m[k-arr[i]];
		cout << k-arr[i] << " " << arr[i] << endl;
		if(k - arr[i] == arr[i])
			count--;
	}
	for(int i = 0; i <= max; i++) {
		cout << i << ": " << m[i] << endl;
	}
	return count/2;
}
int main() {
    int n, k;
    cin >> n >> k;
    int arr[MAX];
    for(int i = 0; i < n; i++) {
    	cin >> arr[i];
    }
    cout << getPairsCount(arr, n, k) << endl;
    return 0;
}

/*
Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2

*/	