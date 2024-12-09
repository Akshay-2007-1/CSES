#include <iostream>
using namespace std;
 
int main () {
	int n;
	cin >> n;
	long long max = 0;
	long long num = 0;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		if (max < tmp) {
			max = tmp;
		}
		if (i > 0) {
			num += max - tmp;
		}
	}
	cout << num << endl;
	return 0;
}
