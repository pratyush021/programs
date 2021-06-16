#include<bits/stdc++.h>
using namespace std;


/*
6 5 8 
1 5 10 20 40 80 
6 7 20 80 100
3 4 15 20 30 70 80 120

*/
// brute force
vector<int> commonElements(int a1[], int a2[], int a3[], int n1, int n2, int n3) {
	//iterate through each array and store the frequency in an unordered map 
	unordered_map<int, int> m1;
	unordered_map<int, int> m2;
	unordered_map<int, int> m3;

	vector<int> sol;
	for(int i = 0; i < n1; i++) m1[a1[i]]++;
	for(int i = 0; i < n2 ; i++) m2[a2[i]]++;
	for(int i = 0; i < n3; i++) m3[a3[i]]++;
	// for (auto i = m.begin(); i != m.end(); i++){
 //        // cout << i->first << ":" << i->second
 //        //      << endl;
 //        if(i->second == 3) {
 //        	sol.push_back(i->first);
 //        }
	// }
	// sort(sol.begin(), sol.end());
	for(int i = 0; i < n1; i++) {
		if(m1[a1[i]] > 0 && m2[a1[i]] > 0 && m3[a1[i]] > 0 ) {
			sol.push_back(a1[i]);
			m1[a1[i]] = 0;//to avoid counting twice

		}
	}
	// cout << "________________________" << endl;
	return sol;
}

// vector<int> commonElements(int a1[], int a2[], int a3[], int n1, int n2, int n3) {
// 	int i = 0, j = 0, k = 0;
// 	vector<int> sol;
// 	while(i < n1 && j < n2 && k < n3) {
// 		if(a1[i] == a2[j] && a2[j] == a3[k]) {
// 			sol.push_back(a1[i]);
// 			i++;
// 			j++;
// 			k++;
// 		} else if(a1[i] < a2[j]) {
// 			i++;
// 		} else if(a2[j] < a3[k]) {
// 			j++;
// 		} else {
// 			k++;
// 		}
// 	}
// 	return sol;
// }

int main() {
	int n1, n2, n3;
	cin>> n1>>n2>> n3;
	int a1[n1], a2[n2], a3[n3]; 
	for(int i =0; i < n1; i++) cin >> a1[i];
	for(int i =0; i < n2; i++) cin >> a2[i];
	for(int i =0; i < n3; i++) cin >> a3[i];
	vector<int> sol = commonElements(a1, a2 , a3, n1, n2, n3);
	if(sol.size()== 0) 
		cout << -1;
	for(auto a: sol) {
		cout << a << " ";
	}
	cout << endl;
}