#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
#define ll long long 
//#define for(i,n) for(int i = 0; i <n;++i)
void test_case() {
	int n, count = 0;
	cin >> n;
	int arr[MAX];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int i = 0, j = n-1;
	int max = arr[0], min = arr[0];
	for(int i = 0; i < n; i++) {
		if(arr[i] >= max) {
			max = arr[i];
		}
		if(arr[i] <= min ) {
			min = arr[i];
		}
	}
	bool flag1 = false, flag2 = false;
	while(i < j) {
		if(arr[i] == min || arr[i] == max) {
			flag1 = true;
		} else if(arr[j] == min || arr[j] == max) {
			flag2 == true;
		}
		i++;
		j--;
		count++;
	}
	cout << count << endl;
	cout << "+++++++++++++++++" << endl;
}
int main() {
	int t;
	cin >> t;
	for(int i = 0; i< t; i++) {
		test_case();
	}
	return 0;
}

