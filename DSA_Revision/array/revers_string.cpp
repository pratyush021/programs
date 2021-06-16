#include<bits/stdc++.h>
using namespace std;
void reverseString(vector<char>& s) {
	string str = "";
	for(int i = s.size()-1; i >= 0; i--) {
		str += s[i];
	}
	for(int i = 0; i < s.size(); i++) {
		 s[i] = str[i];
		// swap(s[i], s[s.size()-1-i]);
	}
}

int main(){
	string str;
	cin>> str;
	vector<char> ch;
	for(int i=0; i < str.size(); i++) {
		ch.push_back(str[i]);
	}
	reverseString(ch);
	for(char a: ch) {
		cout << a;
	}
	cout << endl;
}