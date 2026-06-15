#include <iostream>
using namespace std;
int main() {
    int n, k;
    cout << "Enter size: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Rotate by: "; cin >> k;
    k %= n;
    int temp[n];
    for (int i = 0; i < n; i++) temp[i] = arr[(i + k) % n];
    cout << "After left rotation: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;
    return 0;
}
