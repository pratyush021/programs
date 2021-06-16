#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n) {
    int s = 0, e =n-1;
    while(s < e) {
        int temp = arr[s];
        arr[s]= arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}
int main() {
    int arr[] = {2, 1, 4, 5, 7, 3, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, n);
    for(int a: arr) {
        cout << a << " ";
    }
    cout << endl;
}