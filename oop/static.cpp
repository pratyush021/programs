#include<bits/stdc++.h>
using namespace std; 
void demo() {
    static int count = 0; 
	count++;
    cout << count << " ";
}
void demo2(){
	int count =0;
	count++;
	cout << count << " ";
}

class test{
	public:
		static int i;
};
int test::i = 10;
int main() { 	
	for(int i = 0; i < 10; i++) {
	//	demo();
	}
	cout << endl;
	for(int i = 0; i < 10; i++) {
		//demo2();
	}
	test t1, t2;

	cout << t1.i << " "<< t2.i << endl;
	return 0;
}
