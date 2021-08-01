#include <bits/stdc++.h>
using namespace std;
int findMinDiff(vector<int> a, int n, int m) {
  int idx=0;
  cout << endl;
  if(m ==0 || n == 0)
    return 0;
  sort(a.begin(), a.end());
  if(n<m)
    return -1;
  int min_diff = INT_MAX;
  for(int i = 0; i < n-m+1; i++) {
    int diff = a[i+m-1]-a[i];
    if(diff < min_diff) {
      min_diff = diff;
    }
  }
  return min_diff;
}

int main() {
  int n, m, temp;
  cin >> n >> m;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin>> temp;
    a.push_back(temp);
  }
  cout << findMinDiff(a, n, m) << endl;
  // findMinDiff(a, n, m);
  return 0;
}
/*
input:
8 5
3 4 1 9 56 7 9 12
*/
