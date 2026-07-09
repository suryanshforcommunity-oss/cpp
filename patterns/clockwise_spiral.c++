#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> a(n, vector<int>(n, 0));
        int top = 0, bottom = n - 1, left = 0, right = n - 1;
        int val = 1;

        while (top <= bottom && left <= right) {
            for (int j = left; j <= right; j++) a[top][j] = val++;
            top++;

            for (int i = top; i <= bottom; i++) a[i][right] = val++;
            right--;

            if (top <= bottom) {
                for (int j = right; j >= left; j--) a[bottom][j] = val++;
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) a[i][left] = val++;
                left++;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j];
                if (j + 1 < n) cout << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

