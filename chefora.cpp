#include<bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int calc(int t) {
	int d= countDigit(t);
	int temp =0;
	int ar[d];
	for(int i = 0; i < d; i++) {
		aar[i] = 
	}
	for(int i = 0; i < d; i++) {
		temp += 
	}
int main() {
	int t;
	cin >> t;
	for(int i =0; i < t; i++) {
	 	if(calc(t) == t) {
			cout << t << endl;
		}
	}
	return 0;

}

