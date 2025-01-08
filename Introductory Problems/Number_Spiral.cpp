#include <iostream>
using namespace std;
 
int main () {
	int n;
	cin >> n;
	long long ans[n];
 
	for (int i = 0; i < n; i++) {
		//row 'y' and coloumn 'x'
		ans[i] = 0;
		long long y, x;
		cin >> y >> x;
		if (x == 1 and y == 1) {
			ans[i] = 1;
			continue;
		}
		
		long long max = (y > x) ? y : x;
		long long tmp = max*max - max + 1;
		
		if (max % 2 == 0 and y < x) {
			ans[i] = tmp - (max - y);
		}
		else if (max % 2 == 1 and y > x) {
			ans[i] = tmp - (max - x);
		}
		else if (max % 2 == 0 and y > x) {
			ans[i] = tmp + (max - x);
		}
		else if (max % 2 == 1 and y < x) {
			ans[i] = tmp + (max - y);
		}
		else {
			ans[i] = tmp;
		}
	}
 
	int j = 0;
	for (auto i : ans) {
		cout << ans[j] << endl;
		j++;
	}
 
	return 0;
}
