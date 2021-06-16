#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
#define ll long long 
//#define for(i,n) for(int i; i <n;++i)

vector<char> st;
bool find(char s) {
    bool flag = false;  
    for(auto &x: st) {
        if(x == s)
            flag = true;
    }
    return flag;
}
void test_case() {
    int n, count = 0;
    bool flag = true;
    string str;
    cin >> n;
    cin >> str;
    for(int i = 0; i < n; i++){
        if(find(str[i])) {
            
        }
    }
    if(flag == true) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}


}


int main() {
    int t = 012;
    // cin >> t;
    // for(int i = 0;i <  t; i++) {
    //     test_case();
    // }
    printf("%d", t);
	return 0;
}
                                                                                               
