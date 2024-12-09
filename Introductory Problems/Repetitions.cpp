#include <iostream>
using namespace std;
 
int main () {
	string test;
	cin >> test;
	int len = test.length();
	string tmp = test.substr(0, 1);
	int num = 1, max = 1;
	for (int i = 1; i < len; i++) {
		if (test.substr(i, 1) == tmp) {
			num++;
		}
		else if (num > max) {
			max = num;
			num = 1;
			tmp = test.substr(i, 1);
		}
		else {
			num = 1;
			tmp = test.substr(i, 1);
		}
	}
 
	if (num > max) {
		max = num;
	}
 
	cout << max << endl;
	return 0;
}
