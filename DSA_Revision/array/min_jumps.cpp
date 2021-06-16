#include<bits/stdc++.h>
using namespace std;
int minJumps(int arr[], int n) {
    int count = 0, i =0;
    while(i < n-1) {
        if(i >= n-1)
            return count;
        else {
            i = i + arr[i];
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << minJumps(arr, n) << endl;
    return 0;
}