#include<bits/stdc++.h>
using namespace std;
class Solution
{   //ref video: https://www.youtube.com/watch?v=1ZGJzvkcLsA
    public:
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
    {
      int top = 0, left = 0;
       int down = r, right = c;
       int d =0, i;
       vector<int> ans;
       while(top < down && left < right) {
           if(d == 0) {
               for(i = left; i < right; ++i) {
                   ans.push_back(matrix[top][i]);
               }
               top++;
           } else if(d == 1) {
               for(i = top; i < down; ++i) {
                   ans.push_back(matrix[i][right-1]);
               }
               right--;
           } else if(d == 2) {
               for(i = right-1; i >= left; --i) {
                   ans.push_back(matrix[down-1][i]);
               }
               down--;
           } else {
               for(i = down-1; i >= top; --i) {
                   ans.push_back(matrix[i][left]);
               }
               left++;
           }
           d = (d+1) % 4;
       }
       return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> matrix = {{1, 2, 3, 4},
           {5, 6, 7, 8},
           {9, 10, 11, 12},
           {13, 14, 15,16}};
    int r = 4, c = 4;
    std::vector<int> v = s.spirallyTraverse(matrix, r, c);
    for(auto a: v) {
      cout << a << " ";
    }
    cout << endl;
    return 0;
}
