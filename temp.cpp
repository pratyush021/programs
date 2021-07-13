#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define MAX 10000
bool check(int arr[], int n) {
  int sum = 0;
  for(int i= 0; i < n; i++) {
    sum += arr[i];
  }
  if(sum == 0) {
    return true;
  }
  return false;
}
void test_case() {
  int n, k;
  cin >> n >> k;
  int arr[MAX];
  for(int i=0; i < n; i++) {
    cin >> arr[i];
  }
  int p = 0;
  int cnt = 0;
  while(check(arr, n) == false) {
    int i = 0, count = 0;
    while(count < k && i < n) {
      int r = pow(2, p);
      int temp = arr[i] ^ r;
      if(arr[i] > temp ) {
        arr[i] = temp;
        count++;
        cnt++;
      }
      i++;
      p++;
    }
  }
  cout << cnt << endl;
  cout << n << k << endl;
  // cout <<"cunt" << endl;
}

int main() {
  int t;
  cin >> t;
  for(int i =0; i < t; i++) {
    test_case();
  }
}
