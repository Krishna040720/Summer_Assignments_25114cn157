#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter rows and cols: "; cin >> r >> c;
    int a[r][c], b[r][c];
    cout << "Matrix A:" << endl;
    for (int i=0;i<r;i++) for (int j=0;j<c;j++) cin >> a[i][j];
    cout << "Matrix B:" << endl;
    for (int i=0;i<r;i++) for (int j=0;j<c;j++) cin >> b[i][j];
    cout << "Difference:" << endl;
    for (int i=0;i<r;i++) { for (int j=0;j<c;j++) cout << a[i][j]-b[i][j] << " "; cout << endl; }
    return 0;
}
