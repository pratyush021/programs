#include<bits/stdc++.h>
using namespace std;

/*
input:- 
	7
	2 6 1 9 4 5 3
*/
int findLongestConseqSubseq(int arr[], int N){ //HASH SOLUTION 
	unordered_set<int> s;
	 // vector<int, int> sol;
	int ans = 0;
	for(int i = 0; i < N; i++) {
		// if(mp.find(arr[i]-1) == mp.end()) {
			s.insert(arr[i]);
	}
	for(int i=0; i < N; i++) {
		if(s.find(arr[i]-1) == s.end()) {
			int temp = arr[i];
			while(s.find(temp) != s.end()) {
				temp++;
			}

			ans = max(ans, temp-arr[i]);
		}
	}

	// for (auto i : s) {
 //    	// cout << i.first << " :"<< i.second<< endl;
 //    	cout << i << " ";
 //   	}

	return ans;
}

//====================
//PRIORITY QUEUE SOLUTION 
//====================

int find(int arr[], int n) {
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i = 0; i < n; i++) {
		pq.push(arr[i]);
	}
	int prev = pq.top();
	pq.pop();
	int m = 1, count = 1;
	while(!pq.empty()) {
		if(pq.top()-prev == 1) {
			count++;
			prev = pq.top();
			pq.pop();
		} else if(pq.top()-prev > 1) {
			count = 1;
			prev = pq.top();
			pq.pop();
		} else if(pq.top()-prev == 0) {
			prev = pq.top();
			pq.pop();
		}
		m = max(m, count);
	}
	return m;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i =0; i < n; i++) {
		cin >> arr[i];
	}
	// cout << findLongestConseqSubseq(arr, n) << endl;
	cout << find(arr, n) << endl;
	return 0;
}
