#include<bits/stdc++.h>
using namespace std;
# define MAX 10000
class Solution {
public:
    void canBeTypedWords(string text, string brokenLetters) {
      int n = text.size(), j =0 ;
      string str = "";
      string s[n];
      for(int i = 0; i < n; i++) {
        if(text[i] == ' ') {
          s[j] = str;
          j++;
          str = "";
        } else {
          str += text[i];
        }
      }
      s[j] = str;
      int arr[j+1];
      memset(arr, 0, sizeof(arr));
      int idx = 0;
      while(idx < brokenLetters.size()) {
        for(int i = 0; i < j+1; i++) {
            for(int k = 0; k < s[i].size(); k++) {
              if(toupper(s[i][k]) == toupper(brokenLetters[idx]))  {
                arr[i] = 1;
              }
            }
        }
        idx++;
      }
      int sum = 0;
      for(auto a: arr) {
        sum += a;
      }
      cout << sum << endl;
    }
};

int main() {
	string text ="leet code";
  string br = "e";
  Solution s;
  s.canBeTypedWords(text, br);
  // cout << s.canBeTypedWords(text, br) << endl;
}
//lol
//after auth
