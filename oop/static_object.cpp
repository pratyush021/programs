#include<bits/stdc++.h>
using namespace std;
class test{
	int i;
	public: 
	test() {
		cout << "This is the constructer" << endl;
	}
	~test() {
		cout << "This is the destructer" << endl;
	}
	
};
class test_static{
	int i;
	public: 
	test_static() {
		cout << "constructer" << endl;
	}
	~test_static() {
		cout << "destructer" << endl;
	}
	
};
int main() {
		 test obj;
		cout << "This is the main function" << endl;
		cout << "==========================" << endl;
		static test_static a;
		cout << "This is the main function" << endl;
		return 0;
}
//scope of the static object is throughout the lifetime of the program 
//scope of non-static object is throughout the block 
