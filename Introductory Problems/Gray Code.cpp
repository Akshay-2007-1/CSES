#include <iostream>
#include <cstring>
using namespace std;

int pow (int base, int exp) {//Handles positive exponents ONLY
    if (exp == 0) return 1;
    else return base*pow(base, exp-1);
}

void recur (int n) {
    int len = pow(2, n);
    char arr[len][n+1];
    int curr = 0, ind = 2;
    for (int i = 0; i < 2; i++) {
        for (int j = 1; j < n; j++) {
            arr[i][j-1] = '0';
        }
        arr[i][n - 1] = (char)(i+48);
    }
    curr += 2;

    /* Terminating all strings with NULL */
    for (int i = 0; i < len; i++) arr[i][n] = '\0';

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < curr; j++) {
            strcpy(arr[curr + j], arr[curr - 1 - j]);
            arr[curr + j][n - ind] = '1';
        }
        ind++;
        curr *= 2;
    }
    for (int i = 0; i < len; i++) {
        cout << arr[i] << endl;
    }
}

int main () {
    int n;
    cin >> n;
    recur(n);

    return 0;
}
