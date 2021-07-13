#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
void test_case() {
	long long a, b, c, d, e, f, g, h, i, m;
	int count = 0;
	cin >> a >> b >> c;
	cin >> d >> f;
	cin >> g >> h >> i;
	unordered_map<int, int> map;
	int sum = (a + i) /2 ;
	map[sum]++;
	sum = (g + c) /2;
	map[sum]++;
	sum = (d + f) /2;
	map[sum]++;
	sum = (b + h) / 2;
	map[sum]++;
	m = map[sum];
	for (auto x : map) {
		  // cout << x.first << " " << x.second << endl;
			if(m <= x.second) {
				e = x.first;
				m = x.second;
			}
	}
	//rows
	if(abs(a+c)/2 == b){ count++; }
	if(abs(d+f)/2 == e){ count++; }
	if(abs(g+i)/2 == h){ count++; }

	//cols
	if(abs(a+g)/2 == d){ count++; }
	if(abs(b+h)/2 == e){ count++; }
	if(abs(c+i)/2 == f){ count++; }

	//diagonals
	if(abs(a+i)/2 == e){ count++; }
	if(abs(c+g)/2 == e){ count++; }
	cout << count << endl;



}
int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cout << "Case #"<<i+1<<": ";
		test_case();
	}
}
