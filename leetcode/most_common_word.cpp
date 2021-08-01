#include<bits/stdc++.h>
#include<cctype>
// #include<boost/algorithm/string.hpp>
using namespace std;
class Solution {
public:
    vector<string> removeDupWord(string str){
        string word = "";
        int count=0;
        vector<string> sol;
        for (auto x : str) 
        {
            if (x == ' ' || x == ',' || x=='.')
            {
                // cout << word << endl;
                if(word != " ") {
                // boost::algorithm::to_lower(str); 
                transform(word.begin(), word.end(), word.begin(), ::tolower);
                sol.push_back(word);
                }
                word = "";

            }
            else {
                word = word + x;
            }
        }
        // cout << word << endl;
        // sol.push_back(word);
        return sol;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) {
        vector<string> v;
        int m = 0;
        // vector<pair<int, string>> so;
        unordered_map<string, int> sol;
        v = removeDupWord(paragraph);
        for(auto a: v) {
            sol[a]++;
            m = max(sol[a], m);
        }
        string ans = "";
        for(auto b : banned) {

            
        }
        for(auto x : sol) {
            if(x.second == m) {
                ans += x.first;
                break;
            }
        }
        return ans;
    }
};

int main() {
    string str;
    str = "Bob hit a ball, the hit BALL flew far after it was hit.";
    vector<string> banned = {"hit"};
    Solution s;
    string sol=s.mostCommonWord(str, banned);
    cout << sol << endl;
    return 0;

}