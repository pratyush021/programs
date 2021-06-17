#include<bits/stdc++.h>
using namespace std;


bool find3Numbers(int A[], int n, int X){
    int l , r;
    bool flag = false;
    sort(A, A+n);
    for(int i = 0; i < n-2; i++) {
    	l = i + 1;
    	r = n-1;
    	while(l < r) {
    		if(A[i] + A[l] + A[r] == X) {
    			flag = true;
    		} else if(A[i] + A[l] + A[r] < X) {
    			l++;
    		} else {
    			r--;
    		}
    	}
    }
    return flag;
}
/*
input: 
6 13 
1 4 45 6 10 8

5 10 
1 2 4 3 6
*/
int main(){
	int n, c;
	cin >> n >> c;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << find3Numbers(arr, n, c) << endl;
	return 0;
}