#include<bits/stdc++.h>
using namespace std;
void test_case() {
  int n, sum = 0;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int max = arr[0], min = arr[0];
  for(int i=0; i < n; i++) {
    if(arr[i] > max) max = arr[i];
    if(arr[i] < min) min = arr[i];
  }
  for(int i = 0; i < n; i++) {
    if(arr[i] == max) {
      arr[i] = min;
    }
  }
  for(int i = 0; i < n; i++) {
    sum += arr[i] / min;
  }
cout << sum << endl;
}

int main() {
  int t;
  cin >> t;
  for(int i =0; i < t; i++) {
    test_case();
  }
}
