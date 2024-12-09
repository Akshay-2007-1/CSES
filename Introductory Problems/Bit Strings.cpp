#include <iostream>
#include <cmath>
 
using namespace std;
 
long long powerit (int r, int e, long long mod) {
    if (e == 0) {
        return 1;
    }
    long long prod = 1;
    for (int i = 0; i < e; i++) {
        prod *= r;
        prod = prod % mod;
    }
    return prod;
}
 
int main () {
    int n;
    cin >> n;
 
    long long mod = 1000000000 + 7;
    cout << powerit(2, n, mod) << endl;
}
