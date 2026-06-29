#include <iostream>
using namespace std;
int main() {
    double a, b; int ch;
    do {
        cout << "\n1.Add 2.Sub 3.Mul 4.Div 5.Mod 6.Exit: "; cin >> ch;
        if (ch >= 1 && ch <= 5) {
            cout << "Enter two numbers: "; cin >> a >> b;
            if (ch == 1) cout << "Result = " << a + b << endl;
            else if (ch == 2) cout << "Result = " << a - b << endl;
            else if (ch == 3) cout << "Result = " << a * b << endl;
            else if (ch == 4) { if (b == 0) cout << "Division by zero!" << endl; else cout << "Result = " << a / b << endl; }
            else if (ch == 5) { if (b == 0) cout << "Mod by zero!" << endl; else cout << "Result = " << (int)a % (int)b << endl; }
        }
    } while (ch != 6);
    return 0;
}