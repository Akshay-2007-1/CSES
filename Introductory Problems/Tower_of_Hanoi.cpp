#include <iostream>
using namespace std;

int calc (int n) {
    if (n == 1) return n;
    return 2*calc(n - 1) + 1;
}

void prntMov(int n, int src, int dst) {
    if (n == 1) cout << src << " " << dst << endl;
    else {
        prntMov(n - 1, src, 6 - src - dst);
        cout << src << " " << dst << endl;
        prntMov(n - 1, 6 - src - dst, dst);
    }
}   

int main () {
    int n;
    cin >> n; // 1 <= n <= 16
    cout << calc(n) << endl;
    prntMov(n, 1, 3);
    return 0;
}