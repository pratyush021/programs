#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
      int sol = 0;
      int diff = *rungs.begin();
      if(*rungs.begin() > dist) {
        sol += (diff/ dist);
      }
      int temp = *rungs.begin();
      vector<int>::iterator ptr;
      for (ptr = rungs.begin()+1; ptr < rungs.end(); ptr++) {
        diff = *ptr - temp;
        if(diff > dist) {
          sol += (diff/ dist);
        }
        temp = *ptr;

      }
      // cout << sol << endl;
      return sol;
    }
};

int main() {
  vector<int> ss = { 3, 4, 6, 7};
  int dist = 2;
  Solution s;
  cout << s.addRungs(ss, dist) << endl;
  return 0;
}
