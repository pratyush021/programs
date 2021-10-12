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

int test_case(int n)
{
    int f1 = 0, f2 = 1, i;
    int sum = 0;
    if (n < 1)
        return sum; 
    sum += f1;
    for (i = 1; i < n; i++) {
        sum += f2;
        int next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
}

int main(){
	int t;
	cin >> t;
	cout << test_case(t) << endl;

	return 0;
}
