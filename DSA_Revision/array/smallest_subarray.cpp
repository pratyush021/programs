#include<bits/stdc++.h>
using namespace std;
int sb(int arr[], int n, int x)
    {
        sort(arr, arr+n);
        int count= 1, sum = 0;
        if(arr[n-1] > x) return count;
        while(x > sum) {
            sum += arr[n-1];
            count++;
            n--;
        }
        return count;
    }
int main() {
  int arr[] = {1, 10, 5, 2, 7};
  int n = sizeof(arr)/sizeof(arr[0]);
  int x = 9;
  cout << sb(arr, n, x) << endl;
  return 0;
}
