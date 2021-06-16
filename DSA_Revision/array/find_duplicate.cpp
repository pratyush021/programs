#include<bits/stdc++.h>
using namespace std;


int findDuplicate(vector<int>& nums) {
    int temp = -1;
    sort(nums.begin(), nums.end());
    for(auto x: nums) {
        if(temp == x) {
            break;
        }
        temp = x;
    }
    return temp;
}

int main() {
    int n, temp;
    cin >> n;
    vector<int> arr;
    for(int i =0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    cout << findDuplicate(arr) << endl;
    return 0;
}