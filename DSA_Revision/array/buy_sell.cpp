#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int min =prices[0],  profit = 0;
    int idx;
    for(int i = 0; i < prices.size(); i++) {
        for(int j = i; j < prices.size();j++) {
            profit = max(prices[j] - prices[i], profit);

        }
    }    
    return profit;   
}
int main() {
    int n, temp;
    cin >> n;
    vector<int> ar; 
    for(int i = 0; i < n; i++) {
        cin >> temp;
        ar.push_back(temp);
    }
    cout << maxProfit(ar) << endl;
    return 0;
}