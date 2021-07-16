#include<bits/stdc++.h>
using namespace std;
# define MAX 10000
void test() {
  int n, a, b, c= 0;
  string s;
  cin >> n >> a >> b;
  cin >> s;
  for(int i =0; i < n-1; i++) {
    if(s[i] != s[i+1]) {
      c++;
    }
  }
  if(b > 0) {
    cout << (a * 1 + b) * n << endl;
  } else {
    cout << (c/2 + 1) * b + a * n << endl;
  }
}
int main() {
	int t;
	cin >> t;
  for(int i = 0; i < t; i++) {
    test();
  }

}
/* 3
3 2 0
000
5 -2 5
11001
6 1 -4
100111 */
