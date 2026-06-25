#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    int m, n;
    cout << "Size of first: "; cin >> m;
    int a[m];
    for (int i = 0; i < m; i++) cin >> a[i];
    cout << "Size of second: "; cin >> n;
    int b[n];
    for (int i = 0; i < n; i++) cin >> b[i];
    unordered_set<int> s(a, a + m), seen;
    cout << "Common elements: ";
    for (int i = 0; i < n; i++) {
        if (s.count(b[i]) && !seen.count(b[i])) { cout << b[i] << " "; seen.insert(b[i]); }
    }
    cout << endl;
    return 0;
}
