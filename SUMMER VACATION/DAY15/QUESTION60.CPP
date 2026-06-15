#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int pos = 0;
    for (int i = 0; i < n; i++) if (arr[i] != 0) arr[pos++] = arr[i];
    while (pos < n) arr[pos++] = 0;
    cout << "After moving zeroes: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
