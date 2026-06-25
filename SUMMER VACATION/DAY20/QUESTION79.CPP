#include <iostream>
using namespace std;
int main() {
    int r, c;
    cout << "Enter rows and cols: "; cin >> r >> c;
    int a[r][c];
    for (int i=0;i<r;i++) for (int j=0;j<c;j++) cin >> a[i][j];
    for (int i=0;i<r;i++) {
        int s = 0;
        for (int j=0;j<c;j++) s += a[i][j];
        cout << "Row " << i+1 << " sum = " << s << endl;
    }
    return 0;
}
