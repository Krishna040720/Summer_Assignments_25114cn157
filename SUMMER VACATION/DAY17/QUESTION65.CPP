#include <iostream>
using namespace std;
int main() {
    int m, n;
    cout << "Enter size of first array: "; cin >> m;
    int a[m];
    for (int i = 0; i < m; i++) cin >> a[i];
    cout << "Enter size of second array: "; cin >> n;
    int b[n];
    for (int i = 0; i < n; i++) cin >> b[i];
    cout << "Merged array: ";
    for (int i = 0; i < m; i++) cout << a[i] << " ";
    for (int i = 0; i < n; i++) cout << b[i] << " ";
    cout << endl;
    return 0;
}
