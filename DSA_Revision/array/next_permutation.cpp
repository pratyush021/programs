#include<bits/stdc++.h>
using namespace std;
class Solution{
    public: 
    void nextPermutation(vector<int>& nums) {
        bool flag = true;
        for(int i =nums.size()-1; i >= 1; i--) {

                if(nums[i-1] < nums[i]) {
                    if(flag == true) {
                        swap(nums[i-1], nums[i]);
                        flag = false;
                    }
                    
                }
        }
        if(flag == true) {
            sort(nums.begin(), nums.end());
        }

        
    }
};
int main() {
    vector<int> n = {3, 2, 1};
    Solution s;
    s.nextPermutation(n);
    for(auto a: n) {
        cout << a << " ";
    }
    cout << endl;
    return 0;
}