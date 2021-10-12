#include<bits/stdc++.h>
using namespce std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //two pointers approach
        int n = nums.size();
        set<vector<int>> sol;
        vector<vector<int>> ans; // to remove duplicates
        sort(nums.begin(), nums.end());
        // vector<vector<int>> sol;
        for(int i =0; i < n-2; i++) {
            int l = i + 1;
            int h = n-1;
            while(l < h) {
                if(nums[i] + nums[l] + nums[h] == 0) {
                    // return {nums[i], nums[l], nums[h]};
                    // for each pair of (l,h) we are adding them in a set containg vectors
                    // set automatically removes duplicates for us
                    sol.insert({nums[i], nums[l], nums[h]});
                    //updating the values of l and h
                    l++;
                    h--;
                } else if(nums[i] + nums[l] + nums[h]  < 0)
                    l++;
                else
                    h--;
            }
        }
        // as we need to return a 2d vector, we are adding the values of set in a vector
        //we add values of sol to a 2d vector ans
        set<vector<int>>::iterator it;
        for(it = sol.begin(); it != sol.end(); it++) {
            ans.push_back(*it);
        }
        return ans;
    }
    vector<vector<int>> threeSum_optimized(vector<int>& nums) {
      //optimzed approach
     vector<vector<int>> sol;
     if(nums.size() < 3) return sol;
     sort(nums.begin(), nums.end());
     for(int i =0; i < nums.size()-2; i++) {
         if(!i or (i and nums[i] != nums[i-1])) {
             int l = i + 1;
             int h = nums.size()-1;
             int sum = -nums[i];
             while(l < h) {
                 if(nums[l] + nums[h] == sum) {
                     // sol.push_back({nums[i], nums[l], nums[h]});
                     vector<int> pp;
                     pp.push_back(nums[i]);
                     pp.push_back(nums[l]);
                     pp.push_back(nums[h]);
                     sol.push_back(pp);
                     //to avoid duplicates
                     while(l < h and nums[i] == nums[i+1]) l++;
                     while(l < h and nums[h] == nums[h-1]) h--;
                     l++;
                     h--;
                 } else if(nums[l] + nums[h] < sum) l++;
                 else h--;
             }
         }
     }
     return sol; 
    }
};
int main() {
  int n;

  cin >> n;
  vector<int> arr(n);
  int temp;
  for(int i = 0; i< n; i++) {
    cin >> temp;
    arr.push_back(temp);
  }
  Solution s;
  vector<vector<int>> sol = s.threeSum(arr);
  for(auto a: arr) {
    for(auto b: a) {
      cout << b << " ";
    }
    cout << endl;
  }
}
