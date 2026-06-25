#include <iostream>
using namespace std;
int main() {
    int m, n;
    cout << "Size of first sorted array: "; cin >> m;
    int a[m];
    for (int i=0;i<m;i++) cin >> a[i];
    cout << "Size of second sorted array: "; cin >> n;
    int b[n];
    for (int i=0;i<n;i++) cin >> b[i];
    int i=0, j=0;
    cout << "Merged sorted: ";
    while (i<m && j<n) { if (a[i]<=b[j]) cout<<a[i++]<<" "; else cout<<b[j++]<<" "; }
    while (i<m) cout<<a[i++]<<" ";
    while (j<n) cout<<b[j++]<<" ";
    cout << endl;
    return 0;
}
