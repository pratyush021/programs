#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
struct comparator{
        public:
            bool operator() (vector<int> &v1,vector<int> &v2){
                return v1[0]<v2[0];
            }
    };
class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> sol;
        sort(intervals.begin(), intervals.end(),comparator() );
        sol.push_back(intervals[0]);
        for(int i = 1, j = 0; i < intervals.size(); i++) {
            if(sol[j][1] >= intervals[i][0]) {
                if(sol[j][1] < intervals[i][1]) {
                    sol[j].pop_back();
                    sol[j].push_back(intervals[i][1]);
                }
                if(sol[j][1] >= intervals[i][1]) {
                    continue;
                }
                
            }  else {
                    sol.push_back(intervals[i]);
                    j++;
            }
        }
        return sol;

            //  vector<vector<int>>v;
            // sort(g.begin(),g.end(),comparator());
            // v.push_back(g[0]);
            // for(int i=1,j=0; i<g.size();i++){
            //     if(v[j][1]>=g[i][0]){
            //         if(v[j][1]>=g[i][1]){
            //             continue;
            //         }
            //         if(v[j][1]<g[i][1]){
            //             v[j].pop_back();
            //             v[j].push_back(g[i][1]);
            //         }
            //     }
            //     else{
            //         v.push_back(g[i]);
            //         j++;
            //     }
            // }
            // return v;
    }
};


int main(){
    Solution s;
    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> sol = s.merge(intervals);
    for(int i =0; i < sol.size(); i++) {
        for(int j =0; j < sol[0].size(); j++) {
            cout << sol[i][j] <<" ";
        }
        cout << endl;
    }
return 0;

}