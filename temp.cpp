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

void test(){
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
    temp = temp / 10;
    l++;
  }
  while(temp >= 8 && temp < 10) {
    temp = temp / 8;
    m++;
  }
  while (temp > 0) {
    temp = temp / 6;
    s++;
  }
  l = l * 15;
  m = m * 20;
  s = s * 25;
  mm = min(s, m);
  return min(l, mm);
}

int main() {
  int t;
  cin >> t;
  for(int i =0; i < t; i++) {
    test_case();
  }
}
