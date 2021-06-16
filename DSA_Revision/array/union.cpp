#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int x[n], y[m];
	set<int , greater<int>> s;
	for(int i =0; i < n; i++) {
		cin >> x[i];
	}
	for(int i = 0; i < m; i++) {
		cin >> y[i];
	}
	for(int i = 0; i < n; i++) {
		s.insert(x[i]);
	}
	for(int i =0; i< m; i++) {
		s.insert(y[i]);
	}
	cout << s.size() << endl;

}
