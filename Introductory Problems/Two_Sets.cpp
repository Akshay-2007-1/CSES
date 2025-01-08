#include <iostream>
using namespace std;
 
int main () {
    int n;
    cin >> n;
 
    if (n % 4 == 0 or n % 4 == 3) {
        cout << "YES" << endl;
        if (n % 4 == 0) {
            cout << n/2 << endl;
            int i = 0;
            for (i = 0; i < n; i+=2) {
                cout << (i + 1) << " " << n - i << " ";
                if (i + 2 == n/2) {
                    cout << endl << n/2 << endl;
                }
            }
            cout << endl;
        }
        else if (n % 4 == 3) {
            cout << n/2 + 1 << endl;
            cout << 1 << " " << 2 << " ";
            if (n == 3) {
                cout << endl << 1 << endl << 3 << endl;
            }
            else {
                for (int i = 4; i < n; i+= 2) {
                    if (i == 4 + (n - 3)/2) {
                        cout << endl << n/2 << endl << 3 << " ";
                    }
                    cout << i << " " << n - (i - 4) << " ";
                }
                cout << endl;
            }
        }
    }
    else {
        cout << "NO" << endl;
    }
 
    return 0;
}
