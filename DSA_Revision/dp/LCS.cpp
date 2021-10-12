#include<bits/stdc++.h>
using namespace std;
//Recursive
// int LCS(string str, string s, int n, int m) {
//  if(n == 0  || m ==0 ) return 0;
//  if(str[n-1] == s[m-1])
//  	return 1 + LCS(str, s, n-1, m-1);
//  else return max(LCS(str, s, n-1, m), LCS(str, s, n, m-1));
// }
//Memoization 
// int LCS(string str, int n,string s, int m ) {
// 	if(n==0 || m==0) return 0; 
//         if(dp[n][m] != -1) dp[n][m];
//         if(str[n-1] == s[m-1]) dp[n][m] = 1 + LCS(str, n-1, s, m-1);
//         else dp[n][m] = max(LCS(str, n-1, s, m), LCS(str, n, s, m-1));
//         return dp[n][m];
// }
//top down 
int LCS(string str, int n, string s, int m) {
	
}
int main() {
	//longest common subsequence 
	string str, s;
	cin >> str; 
	cin >> s;
	cout << LCS(str, s, str.size()-1, s.size()-1) << endl;
}