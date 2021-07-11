#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
void test_case() {
	int arr[MAX][MAX];
	int n;
	for(int i = 0; i < 3; i++) {
		for(int j =0; j < 3; j++) {
			if(i!= 1 && j != 1) {
				cin >> n;
				arr[i][j]= n;
			}
		}
	}
	for(int i =0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

}
int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cout << "Case #"<<i+1<<" ";
		test_case();
		cout << endl;
	}
}
