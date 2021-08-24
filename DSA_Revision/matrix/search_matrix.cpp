#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //BRUTE FORCE
        // int r = matrix.size();
        // int c = matrix[0].size();
        // for(int i = 0; i < r; i++) {
        //     for(int j = 0; j < c; j++) {
        //         if(matrix[i][j] == target)
        //             return true;
        //     }
        // }
        // return false;
        //EFFICIENT
        int n = matrix.size();
        int m = matrix[0].size();
        int r = n-1;
        int c = 0;
        while(r >= 0 && c < m) {
            if(matrix[r][c] == target) {
                return true;
            } else if(matrix[r][c] > target) {
                r--;
            } else {
                c++;
            }
        }
        return false;
    }
};

int main() {
  vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
  int  target = 23;
  Solution s;
  cout << s.searchMatrix(matrix, target) << endl;
  return 0;
}
