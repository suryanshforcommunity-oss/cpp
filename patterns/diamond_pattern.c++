#include <iostream>
using namespace std;

void printDiamond(int n) {
    int spaces = n - 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < i; j++) cout << "* ";
        cout << endl;
        spaces--;
    }
    spaces = 0;
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < i; j++) cout << "* ";
        cout << endl;
        spaces++;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        printDiamond(n);
    }
    return 0;
}
