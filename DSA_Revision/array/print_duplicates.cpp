#include<bits/stdc++.h>
using namespace std;
#define MAX 256 
void count(string str) {
	unordered_map<char, int> mp;
	for(int i=0; i < str.size(); i++) {
		mp[str[i]]++;
	}
	for(auto i: mp) {
		if(i.second > 1) {
			cout << i.first << " " << i.second<< endl;			
		}
	}
}
int main() {
	string str;
	cin >> str;
	count(str);
	return 0;
}