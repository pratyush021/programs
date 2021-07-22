#include <bits/stdc++.h>
using namespace std;
void findMinDiff(vector<int> a, int n, int m) {
  int arr[n];
  int N = n;
  if(n==0 || m ==0) {
    return 0;
  }
  if(n < m) {
    return -1;
  }
  for (auto it = a.end()-1; it != a.begin(); --it) {
      arr[N-1] = *it;
      N--;
  }
  sort(arr, arr+n);
  int diff = arr[m-1]-arr[0];
  for(int i =0; i < n-m-1; i++) {
    diff = min(diff, arr[m+i-1]-arr[i]);
  }
  return diff;

}

int main() {
  int n, m, temp;
  cin >> n >> m;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin>> temp;
    a.push_back(temp);
  }
  // cout << findMinDiff(a, n, m) << endl;
  findMinDiff(a, n, m);
  return 0;
}
/*
input:
8 5
3 4 1 9 56 7 9 12
*/
