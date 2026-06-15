#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: "; cin >> n;
    int arr[n-1];
    cout << "Enter " << n-1 << " numbers (1 to " << n << " with one missing): ";
    for (int i = 0; i < n-1; i++) cin >> arr[i];
    int expected = n * (n + 1) / 2;
    int actual = 0;
    for (int i = 0; i < n-1; i++) actual += arr[i];
    cout << "Missing number = " << expected - actual << endl;
    return 0;
}
