#include <iostream>
using namespace std;
 
int main () {
    int n;
    cin >> n;
 
    int count5 = 0;
    for (int i = 5; i <= n; i+=5) {
        int tmp = i;
        while (i % 5 == 0) {
            count5++;
            i /= 5;
        }
        i = tmp;
    }
 
    cout << count5 << endl;
  return 0;
}
