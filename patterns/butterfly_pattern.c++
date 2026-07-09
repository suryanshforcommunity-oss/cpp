#include <iostream>
using namespace std;

static void printStarsRow(int n, int i) {
    // Left half (spaces + stars): i from 0..n-1 => stars = i+1
    for (int k = 0; k < n - (i + 1); k++) cout << " ";
    for (int k = 0; k < i + 1; k++) cout << "*";

    // Middle spaces
    for (int k = 0; k < 2 * (n - (i + 1)) + 1; k++) cout << " ";

    // Right half
    for (int k = 0; k < i + 1; k++) cout << "*";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // Top half
        for (int i = 0; i < n; i++) {
            printStarsRow(n, i);
        }
        // Bottom half
        for (int i = n - 2; i >= 0; i--) {
            printStarsRow(n, i);
        }
    }
    return 0;
}

