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
vector<int> calc(int arr[], int n , int k) {
	struct elecount temp[k-1];
	if(k < 2)
		return {};
	//initializing all count to 0
	for(int i=0; i < k-1; i++) {
		temp[i].c = 0;
	}
	//process all elements of the input array. 
	
}
int main() {
	int arr[] = { 3, 1, 2, 2, 2, 1, 4, 3, 3  };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    vector<int> sol = calc(arr, n, k);
    for(auto a: sol) {
    	cout << a << " ";
    }
    cout << endl;
    return 0;

}