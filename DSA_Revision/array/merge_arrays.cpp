#include<bits/stdc++.h>
using namespace std;
/*
input:-
4 5
1 3 5 7
0 2 6 8 9
*/ 
// void merge_brute(int arr1[], int arr2[], int n, int m) {

    
// }
void merge(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0, k = n-1;
    while(i <= k && j < m) {
        
        if(arr1[i] < arr2[j]) 
            i++;
        else 
            swap(arr2[j], arr1[k]);
            j--;
            k++;
    }
}


int main(){
    int n, m;
    cin >> n >> m;
    int arr1[n], arr2[m];
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for(int i =0; i < m; i++) {
        cin >> arr2[i];
    }
    merge(arr1, arr2, n, m);
    for(int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    for(int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}