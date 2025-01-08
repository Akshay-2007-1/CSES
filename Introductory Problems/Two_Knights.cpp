#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    for (long long int i = 1; i <= n; i++) {
        long long tmp = (i*i*(i*i - 1))/2;
		long long num = (i - 4)*(i - 2)*4 + 2*i - 4 + (i - 2)*2*(5);
        tmp -= num;
        cout << tmp  << endl;
    }
    return 0;
}
