#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[26] = {0};

    // Count frequencies of each character
    for (char c : s) {
        freq[c - 'A']++;
    }

    // Check for more than one odd frequency
    int oddCount = 0;
    char oddChar = '\0'; // Character with an odd frequency
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
            oddChar = 'A' + i; // Store the character with odd frequency
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    // Construct the palindrome
    string half = "";
    for (int i = 0; i < 26; i++) {
        half += string(freq[i] / 2, 'A' + i); // Add half the frequency of each character
    }

    string firstHalf = half;
    string secondHalf = half;
    reverse(secondHalf.begin(), secondHalf.end()); // Create the second half

    // Add the odd character in the middle if it exists
    string result = firstHalf + (oddChar ? string(1, oddChar) : "") + secondHalf;
    cout << result << endl;

    return 0;
}
