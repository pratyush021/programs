#include<bits/stdc++.h>
using namespace std;


string isSubset(int a1[], int a2[], int n, int m) {
    bool flag = false;
    int count = 0, i = 0, j = 0;
    int t = min(m, n);
    sort(a1, a1+n);
    sort(a2, a2+m);
    if(n == 0 || m == 0) {
    	return "No";
    }
    while(i < n && j < m) {
    	if(a1[i] == a2[j]) {
    		count++;
    		i++;
    		j++;
    	} else if(a1[i] > a2[j]) {
    		j++;
    	} else if(a1[i] < a2[j]) {
    		i++;
    	}
    }
    if(count == t) {
    	return "yes";
    } else {
    	return "no";
    }
}

int main(){
	int a1[] = {11, 1, 13, 21, 3, 7};
	int a2[] = {11, 3, 7, 1};
	int n = sizeof(a1)/sizeof(a1[0]);
	int m = sizeof(a2)/sizeof(a2[0]);
	cout << isSubset(a1, a2, n, m) << endl;
	return 0;
}