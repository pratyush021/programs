#include<bits/stdc++.h>
#include<math.h>
using namespace std;
void test_case() {
  int n, sum = 0, max=0, min;
  cin>> n;
  int a[n], b[n], res[n];
  for(int i =0; i < n; i++) {
    cin >> a[i];
  }
  for(int i =0; i< n; i++) {
    cin >> b[i];
  }
  // if(n == 1) {
  //   cout << abs(a[0]-b[0]) << endl;
  // }
  for(int i = 0; i < n; i++) {
    res[i] = a[i]-b[i];
  }
  for(int i: res) {
    sum += i;
    max += abs(i);
  }
  if(sum != 0) {
    cout << -1 << endl;
  } else {
    cout << max/2 << endl;
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
          while(res[i] > 0 && res[j] < 0) {
            cout << i+1 << " " << j+1 << endl;
            res[i]--;
            res[j]++;
          }
          while(res[i] < 0 && res[j] > 0) {
            cout << j+1 << " " << i+1 << endl;
            res[i]++;
            res[j]--;
        }
      }
    }
  }
}
int main() {
  int t;
  cin>> t;
  for(int i = 0; i < t; i++) {

    test_case();

  }
  return 0;
}
