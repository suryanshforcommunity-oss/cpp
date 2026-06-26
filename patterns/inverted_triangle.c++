#include <iostream>
using namespace std;

void printInvertedTriangle(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++) cout << " ";
        for (int j = 0; j < i; j++) cout << "* ";
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        printInvertedTriangle(n);
    }
    return 0;
}
