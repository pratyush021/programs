#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
void test_case() {
	int n;
	cin >> n;

	// random
	std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(n, 2*n); // define the range

    for(int i=0; i<=n; ++i)
        cout << distr(gen) << ' '; // generate numbers
	//
	// // random end
	// string str= "";
	// for(int i = 0; i < n; i++) {
	// 	for(int j = 0; j < n; j++) {
	// 		if(i != j) {
	// 			if(i % 2 == 0 && j % 2 == 0) {
	// 				str += "(";
	// 			} else  {
	// 				str += ")";
	// 			}
	// 		}
	// 	}
	// }
	// cout << str << endl;
	cout << endl;
}

int main(){
	int n;
	cin >> n;
	while(n--) {
		test_case();
	}
	return 0;
}
//0 1 1 2 3 5 7
