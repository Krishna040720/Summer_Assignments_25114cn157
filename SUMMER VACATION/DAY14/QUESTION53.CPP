#include <iostream>
using namespace std;
int main() {
    int n, key;
    cout << "Enter size: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter key: "; cin >> key;
    int found = -1;
    for (int i = 0; i < n; i++) if (arr[i] == key) { found = i; break; }
    if (found != -1) cout << "Found at index " << found << endl;
    else cout << "Not found." << endl;
    return 0;
}
