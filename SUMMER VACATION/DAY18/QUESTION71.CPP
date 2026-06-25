#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, key;
    cout << "Enter size: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    cout << "Enter key: "; cin >> key;
    int lo = 0, hi = n - 1, mid;
    bool found = false;
    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (arr[mid] == key) { cout << "Found at index " << mid << endl; found = true; break; }
        else if (arr[mid] < key) lo = mid + 1;
        else hi = mid - 1;
    }
    if (!found) cout << "Not found." << endl;
    return 0;
}
