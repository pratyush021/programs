#include<bits/stdc++.h>
using namespace std;
void test_case() {
  int n, C;
  cin >> n >> C;
  int arr[n][2];
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 2; j++) {
      cin >> arr[i][j];
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 2;j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cout << "Case #"<<i+1<<": ";
		test_case();
	}
}
