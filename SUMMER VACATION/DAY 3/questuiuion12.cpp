#include <iostream>
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int main() {
    int a, b;
    cout << "Enter two numbers: "; cin >> a >> b;
    cout << "LCM(" << a << ", " << b << ") = " << (long long)a / gcd(a, b) * b << endl;
    return 0;
}