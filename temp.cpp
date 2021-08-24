#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
#define ll long long
static string s;
bool check(string a, string s) {
  for(int i =0; i < s.size(); i++) {
    if(s[i] == a[i]) {
      return false;
    }
  }
  return true;
}
void rotate(string &s)
{
    reverse(s.begin(), s.begin()+1);
    reverse(s.begin()+1, s.end());
    reverse(s.begin(), s.end());
}
set<string> anagram(string input){
  // std::vector<string> ss;
  set<string> ss;
    sort(input.begin(), input.end());
    do

        // ss.push_back(input);
        // if(s[0] != input[0] && s[s.size()-1] != input[s.size()-1]) {
        if(check(input, s)==true) {

          ss.insert(input);

        }
    while(next_permutation(input.begin(), input.end()));
    return ss;
}

void test_case() {
  // string s;
  cin >> s;
  string a  = s;
  // std::vector<string> sol;
  // sol = anagram(s);
  // for(auto a: sol) {
  //   if(check(a, s)==true) {
  //     f = true;
  //     cout << a << endl;
  //     return;
  //   }
  // }
  // if(f == false) {
  //   cout << "IMPOSSIBLE" << endl;
  // }
  set<string> sol = anagram(a);
  set<string> ::iterator itr;
  cout << sol.size() << endl;
  for (itr = sol.begin(); itr != sol.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;
}

int main(){
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		cout << "Case #"<<i+1<<": ";
		test_case();
		// cout << endl;
		// cout << test_case() << endl;
		// cout << debug() << endl;
	}

	return 0;
}
