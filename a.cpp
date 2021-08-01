#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
#define ll long long
int test_case() {
	int n;
	cin >> n;
	int s=0, m=0, l=0;
	int mm, temp;
	temp = n;
	if(n == 0) {
		return 0;
	}
	if(n<=6) {
		return 15;
	}
	while(temp >= 10) {
		temp = temp/10;
		l++;
	}
	while(temp >= 8) {
	  temp = temp/8;
		m++;
	}
	while(temp > 0) {
		temp = temp/6;
		s++;
	}
	s = s * 15;
	m = m * 20;
	l = l * 25;
	return s+m+l;
}
int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		// cout << "Case #"<<i+1<<": ";
		cout << test_case() << endl;
	}
}
