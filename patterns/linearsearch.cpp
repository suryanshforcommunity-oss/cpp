#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of elements: ";
    if (!(cin >> size) || size <= 0) {
        cerr << "Invalid size\n";
        return 1;
    }

    vector<int> nums(size);
    cout << "Enter the elements:\n";
    for (int i = 0; i < size; ++i) cin >> nums[i];

    int target;
    cout << "Enter the element to find: ";
    cin >> target;

    int foundIndex = -1;
    for (int i = 0; i < size; ++i) {
        if (nums[i] == target) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1)
        cout << "Element found at index " << foundIndex << '\n';
    else
        cout << "Element not found\n";

    return 0;
}