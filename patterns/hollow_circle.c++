#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int r;
        cin >> r;

        int size = 2 * r + 1;
        int cx = r, cy = r;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                double dist = sqrt((i - cy) * 1.0 * (i - cy) + (j - cx) * 1.0 * (j - cx));
                // Draw a hollow circle: accept points near radius r.
                if (fabs(dist - r) <= 0.5) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

