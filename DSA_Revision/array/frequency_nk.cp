#include<bits/stdc++.h>
using namespace std; 
/*
arr = 3 1 2 2 1 2 3 3
k = 4 
find all the elements that appear more than n/k times 
*/
struct elecount{
	int e;
	int c;
};
void calc(int arr[], int n , int k) {
	struct elecount temp[k-1];
	if(k < 2)
		return;
	//initializing all count to 0
	for(int i=0; i < k-1; i++) {
		temp[i].c = 0;
	}
	//process all elements of the input array. 
	for(int i = 0 ; i < n;i++) {
		int j;
		for(j= 0; j < k-1; j++) {
			if(temp[j].e == arr[i]) {
				temp[j].c++;
				break;
			}
		}
		if(j == k-1) {
			int l;
			for(l = 0; l < k-1; l++) {
				if(temp[l].c == 0) {
					temp[l].e = arr[i];
					temp[l].c = 1;
					break;
				}
			}
			if(l == k-1)
			for(l  = 0; l < k-1; l++) {
				temp[l].c -= 1;
			}
		}

	}
	//check actual counts 
	for(int i =0 ; i < k-1; i++) {
		int ac = 0;
		for(int j= 0; j < n; j++) {
			if(arr[j] == temp[i].e)
				ac++;
		}
		if(ac > n/k)
		cout << temp[i].e <<"  "<< ac << endl;
	}
	
	
}
int main() {
	int arr[] = { 3, 1, 2, 2, 2, 1, 4, 3, 3  };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    // vector<int> sol = calc(arr, n, k);
    // for(auto a: sol) {
    // 	cout << a << " ";
    // }
    calc(arr, n, k);
    // cout << endl;
    return 0;

}
