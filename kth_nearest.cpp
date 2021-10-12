#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, pair<int, int>>> v;
        int d;
        vector<vector<int>> sol(k);
        for(auto a: points) {
            d = a[0]*a[0] + a[1]*a[1];
            v.push_back({d, {a[0], a[1]}});
        }
        sort(v.begin(), v.end());
        for(int i =0; i < k; i++) {
            sol[i].push_back(v[i].second.first);
            sol[i].push_back(v[i].second.second);
        }
        return sol;
    }
};

int main() {
  
  return 0;
}
