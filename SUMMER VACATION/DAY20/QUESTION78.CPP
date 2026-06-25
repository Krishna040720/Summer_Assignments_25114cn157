#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size: "; cin >> n;
    int a[n][n];
    for (int i=0;i<n;i++) for (int j=0;j<n;j++) cin >> a[i][j];
    bool sym = true;
    for (int i=0;i<n&&sym;i++) for (int j=0;j<n&&sym;j++) if (a[i][j] != a[j][i]) sym = false;
    cout << "Matrix is " << (sym ? "" : "not ") << "symmetric." << endl;
    return 0;
}
