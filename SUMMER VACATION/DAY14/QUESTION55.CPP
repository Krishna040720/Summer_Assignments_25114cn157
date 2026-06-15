#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    if (n < 2) {
        cout << "Need at least 2 numbers." << endl;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(), arr.end());  // ascending order

    // Skip duplicates from the end
    int largest = arr[n-1];
    int second = -1;
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] != largest) {
            second = arr[i];
            break;
        }
    }

    if (second == -1)
        cout << "No second largest (all equal)." << endl;
    else
        cout << "Second largest = " << second << endl;

    return 0;
}

