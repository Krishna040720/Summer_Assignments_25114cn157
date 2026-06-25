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
    unordered_set<int> s;
    for (int i = 0; i < m; i++) s.insert(a[i]);
    for (int i = 0; i < n; i++) s.insert(b[i]);
    cout << "Union: ";
    for (int x : s) cout << x << " ";
    cout << endl;
    return 0;
}
