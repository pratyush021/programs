#include<bits/stdc++.h>
using namespace std;
string check(string str, int n) {
    bool flag = false;
    for(int i = 0; i < n; i++) {
        if(str[i] == '0') {
            if(i == 0) {
                if( str[i+1] != '*')
                    flag = true;
            } else if(i == n-1) {
                if(str[i-1] != '*') 
                    flag = true;
            } else {
                if(str[i-1] != '*' && str[i+1] != '*') {
                    flag = true;
                }
            }
        } else if(str[i] == '1') {
            if(i == 0) {
                if( str[i+1] == '*')
                    flag = true;
            } else if(i == n-1) {
                if(str[i-1] == '*') 
                    flag = true;
            } else {
                if((str[i-1] != '*' && str[i+1] == '*') || (str[i-1] == '*' && str[i+1] != '*')) {
                    flag = true;
                }
            }
        } else if(str[i] == '2') {
            if(str[i-1] == '*' && str[i+1] == '*') {
                flag = true;
            }
        }
    }

    if(flag == true) {
        return "YES";
    } else {
        return "NO";
    }
}
int forgottenGame(string str, int n) {
    
}

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int result;
    // result = forgottenGame(str, n);
    // cout << result;
    cout << check(str, n) << endl;
    return 0;
}
