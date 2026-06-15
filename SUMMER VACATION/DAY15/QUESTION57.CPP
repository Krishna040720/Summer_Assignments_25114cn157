#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int l = 0, r = n - 1;
    while (l < r) { swap(arr[l++], arr[r--]); }
    cout << "Reversed: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
