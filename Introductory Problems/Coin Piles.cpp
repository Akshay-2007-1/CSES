#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        
        // Check if the sum of both piles is divisible by 3
        // and neither pile has more than double the coins of the other
        if ((a + b) % 3 == 0 && a <= 2 * b && b <= 2 * a) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
