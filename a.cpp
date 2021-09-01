#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
void test_case() {
  ll a, b;
  cin >> a >> b;
  int res, res2;
  res = b % a;
  res2 = b % (a+1);
  res = max(res, res2);
  cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		// cout << "Case #"<<i+1<<": ";
		test_case();

	}

	return 0;
}
