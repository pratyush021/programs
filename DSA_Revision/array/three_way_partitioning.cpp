#include<bits/stdc++.h>
using namespace std;

class Solution{
public:sm
    //Function to partition the array around the range such
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b){
      int start = 0;
      int end = array.size()-1;
        for(int i = 0; i <= end;) {
          if(array[i] < a) {
            swap(array[start++], array[i++]);
          } else if(array[i] > b) {
            swap(array[end--], array[i]);
          } else {
            i++;
          }
        }
        for(auto a: array) {
          cout << a << " ";
        }
        cout << endl;
    }
};
int main() {
  vector<int> arr = {1, 14, 5, 20, 4, 2, 54, 20, 87,
                98, 3, 1, 32};
  int a = 10, b = 20;
  Solution s;
  s.threeWayPartition(arr, a , b);
  return 0;
}
