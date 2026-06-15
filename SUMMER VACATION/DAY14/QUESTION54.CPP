#include <iostream>
using namespace std;
int main() {
    int n, key, freq = 0;
    cout << "Enter size: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter element: "; cin >> key;
    for (int i = 0; i < n; i++) if (arr[i] == key) freq++;
    cout << "Frequency of " << key << " = " << freq << endl;
    return 0;
}
