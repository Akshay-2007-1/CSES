#include <iostream>
using namespace std;

int ans;

int chkSafe(char grid[8][8], int row, int col) {
    if (grid[row][col] == 'Q' || grid[row][col] == '*') return 0;
    
    // ROW and COL check
    for (int i = 0; i < 8; i++) {
        if (i != row && grid[i][col] == 'Q') return 0;
        if (i != col && grid[row][i] == 'Q') return 0;
    }

    // Diagonal check
    for (int i = 1; i < 8; i++) {
        if (row + i < 8 && col + i < 8 && grid[row + i][col + i] == 'Q') return 0;
        if (row + i < 8 && col - i >= 0 && grid[row + i][col - i] == 'Q') return 0;
        if (row - i >= 0 && col - i >= 0 && grid[row - i][col - i] == 'Q') return 0;
        if (row - i >= 0 && col + i < 8 && grid[row - i][col + i] == 'Q') return 0;
    }

    return 1;
}

void recur(char grid[8][8], int row) {
    if (row >= 8) {
        ans++;
        return;
    }
    for (int col = 0; col < 8; col++) {
        if (chkSafe(grid, row, col)) {
            grid[row][col] = 'Q';
            recur(grid, row + 1);
            grid[row][col] = '.';
        }
    }
}

int main() {
    char grid[8][8];
    ans = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> grid[i][j];
        }
    }

    recur(grid, 0);
    cout << ans << endl;

    return 0;
}
