#include<bits/stdc++.h>
using namespace std;
void rearrange(int arr[], int n) {
	bool flag = false;
	unordered_set<int> sum_set;
	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += arr[i];
		if(sum == 0 || sum_set.find(sum) != sum_set.end()) {
			flag = true;
		}
		sum_set.insert(sum);
	}
 	if(flag == false) {
		cout <<"NO"<< endl;
	} else {
		cout << "YES" << endl;
	}
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	rearrange(arr, n);
	return 0;
}