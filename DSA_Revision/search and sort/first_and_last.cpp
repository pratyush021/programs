#include<bits/stdc++.h>
using namespace std;
vector<int> find(int arr[], int n, int x) {
	bool first = false;
	int idx, id;
	vector<int> s;
	for(int i = 0; i < n; i++) {
		if(arr[i] == x && first == false) {
			idx = i;
			first = true;
		}
		if(arr[i] == x && first == true) {
			id = i;
		}
	}
	s.push_back(idx);
	s.push_back(id);
	return s;
}

int main() {
	int n, x;
	cin >> n >>x;
	int arr[n];
	for(int i = 0; i <n; i++) {
		cin >> arr[i];
	}
	vector<int> sol = find(arr, n, x);
	for(int a: sol) {
		cout << a << " ";
	}
	cout << endl;
	return 0;
}