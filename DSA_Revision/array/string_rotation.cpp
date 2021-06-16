#include<bits/stdc++.h>
using namespace std;
bool check(string s, string x) {
	if(x.size() != s.size()) {
		return false;
	}
	x += x;
	if(x.find(s)) {
		return true;
	} else {
		return false;
	}
}
int main() {
	string str1, str2;
	cin >>str1 >> str2;\
	cout << check(str1, str2) << endl;
	return 0;
}