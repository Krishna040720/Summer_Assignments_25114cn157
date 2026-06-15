#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int n, target;
    cout << "Enter size: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter target sum: "; cin >> target;
    unordered_set<int> seen;
    bool found = false;
    for (int i = 0; i < n; i++) {
        int comp = target - arr[i];
        if (seen.count(comp)) { cout << "Pair: (" << comp << ", " << arr[i] << ")" << endl; found = true; break; }
        seen.insert(arr[i]);
    }
    if (!found) cout << "No pair found." << endl;
    return 0;
}
