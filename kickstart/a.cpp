#include<bits/stdc++.h>
using namespace std;
int find_val(string str, int i, int n) {
	int left = i;
	int right = i;
	int count = 0, left_count, right_count;
	if(i != 0 && i != n-1) {
		while(left >= 0) {
			if(str[left] !='1') {
				count++;
				left--;
			} else {
				break;
			}
		}
		left_count = count;
		cout <<"left count for "<<i <<" is "<< left_count << " " << endl;
		if(count == 0) left_count = INT_MAX;
		//to check for the right side
		count = 0;
		while(right < n) {
			if(str[right]!='1') {
				count++;
				right++;
			} else {
				break;
			}

		}
		right_count = count;
		if(count == 0 && right == n-1) {
			right_count = INT_MAX; 
		}
		// cout << right_count << " " << endl;
		cout <<"right count for "<<i <<" is "<< right_count << " " << endl;
		if(count == 0) right_count = INT_MAX;
	}
	if(i == 0) {
		left_count = INT_MAX;
		while(right < n) {
			if(str[right]!='1') {
				count++;
				right++;
			} else {
				break;
			}

		}
		right_count = count;
	}
	if(i == n-1) {
		right_count = INT_MAX;
		while(left < n) {
			if(str[left]!='1') {
				count++;
				left++;
			} else {
				break;
			}

		}
		left_count = count;
	}
	cout << "Choosen Value is " << min(left_count, right_count) << endl;
	cout << "=================="<< endl;
	return min(left_count, right_count);
}

void test_case() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	int sum  = 0, left, right;
	for(int i =0; i < n; i++) {
		if(str[i] == '1') {
			sum+= 0;
		} else {
				// left = find_left(str, i);
				// right = find_right(str, i);
				// cout << "for index " << i << " is " << find_val(str, i) << endl;
				sum += find_val(str, i, n);

		}
	}
	cout << sum << endl;

}

void test_case2() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	map<char, int> mp;
	// for(auto a: mp) {
	// 	a.second = -1;
	// }
	for(int i =0 ; i < n; i++) {
		//for each index the nearmost left and right 1
		int x = i, y = i;
		int left_count = 0, right_count  = 0;
		while(x--) {
			if(str[x] == '1')
				left_count++;
		}
		while(y < n) {
			if(str[y] == '1') {
				right_count++;
			}
		}
		int temp = min(left_count, right_count);
			mp[i] = min(temp, mp[i]);
	}
	int sum = 0;
	for(auto a: mp) {
		sum += a.second;
	}
cout << sum;
}
int main() {
	int t;
	cin>> t;
	for(int i = 0; i < t; i++) {
		printf("Case #%d:",i+1 );
		test_case();
	}
}
