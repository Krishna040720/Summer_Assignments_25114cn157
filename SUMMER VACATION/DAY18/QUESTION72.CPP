#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter size: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n, greater<int>());
    cout << "Sorted (descending): ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
