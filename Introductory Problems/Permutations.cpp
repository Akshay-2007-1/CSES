#include <iostream>
using namespace std;
 int main () {
 	int n;
 	cin >> n;
 	int num = 0;
	int tmp = 1;
 
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION" << endl;
		return 0;
	}
	else if (n == 1) {
		cout << "1" << endl;
		return 0;
	}
	else if (n == 4) {
		cout << "2 4 1 3" << endl;
		return 0;
	}
 	while (true) {
 		if (num == n) {
 			break;
 		}
 		cout << tmp << " ";
 		tmp += 2;
 		if (tmp > n) {
 			tmp = 2;
 		}
 		num++;
 	}
 	cout << endl;
 	return 0;
 }
