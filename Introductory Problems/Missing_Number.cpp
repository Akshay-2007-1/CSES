#include <iostream>
using namespace std;
 
int main () {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n - 1; i++) {
		int tmp;
		cin >> tmp;
		arr[tmp - 1] = 1;
	}
 
	for (int i = 0; i < n; i++) {
		if (arr[i] != 1) {
			cout << i + 1 << endl;
		}
	}
 
	return 0;
}
