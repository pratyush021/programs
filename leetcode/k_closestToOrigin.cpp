#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> sol(k); 
        vector<pair<int, pair<int, int>>> v;
        int d;
        for(auto i: points) {
        	d = i[0]*i[0]+i[1]*i[1];
        	v.push_back({d, {i[0], i[1]}});
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < k; i++) {
        	sol[i].push_back(v[i].second.first);
        	sol[i].push_back(v[i].second.second);

        }
     	return sol;
	}

};

int main() {
	vector<vector<int>> arr = {{3, 3}, {5, -1}, {-2, 4}};
	int k =2;
	Solution s;
	vector<vector<int>> sol = s.kClosest(arr, k);
	for(int i=0; i < sol.size(); i++) {
		for(int j = 0; j < sol[0].size();j++) {
			cout << sol[i][j] << " ";
		}
		cout << endl;
	}
	return 0;	
}



/* 
nth_element(points.begin(), points.begin() + k, points.end(),
            [] (const auto& a, const auto& b) { return a[0]*a[0] + a[1]*a[1] < b[0]*b[0] + b[1]*b[1]; });
        points.resize(k);
        return points;

*/