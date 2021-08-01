#include<bits/stdc++.h>
using namespace std;
# define MAX 10000
#define ll long long
void test_case() {
  ll n, m;
  cin >> n >> m;
  ll loc = 1, ans = 0;
  for(int i = 0; i < m; i++) {
    ll now;
    cin >> now;
    if(now >= loc) ans += now-loc;
    else ans += n - (loc-now);
    loc = now;
  }
  cout << ans << endl;
}

int main() {
  test_case();
}
//lol
//after auth
