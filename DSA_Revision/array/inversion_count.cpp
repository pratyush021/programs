//how far the array is from being sorted ? 
#include<bits/stdc++.h>
using namespace std;
int merge(int arr[], int temp[], int left, int mid, int right);
int MergeSort(int arr[], int temp[], int left, int right);
int mergeSort(int arr[], int n) {
    int temp[n];
    return MergeSort(arr, temp,0,n-1); 
}
int MergeSort(int arr[], int temp[], int left,int right) {
    int mid, invCount = 0;
    while(left < right) {
        mid = (left + right) / 2;
        invCount += MergeSort(arr, temp, left, mid);
        invCount += MergeSort(arr, temp, mid+1, right);

        invCount = merge(arr, temp, left, mid+1, right);
        
    }
    return invCount;
}
int merge(int arr[], int temp[], int left, int mid, int right) {
	int i, j, k; 
	i = left;
	j = mid;
	k = left;
	int inv_count = 0;
	while( (i <= mid-1) && (j <= right)) {
		if( arr[i] <= arr[j]) {
			temp[k++] = arr[i++];
		} else {
			temp[k++] = arr[j++];
			inv_count += mid-i;
		}
	}
	
	while(i < mid) {
		temp[k++] = arr[i++];
	}
	while(j <= right) {
		temp[k++] = arr[j++];
	}
	
	for(i = left; j <= right; i++) {
		arr[i] = temp [i];
	}
	return inv_count;
}


int main() {
    int arr[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = mergeSort(arr, n);
    cout << ans << endl;
    return 0;

}
