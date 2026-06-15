#include <iostream>
using namespace std;
long long factorial(int n) { return (n <= 1) ? 1 : n * factorial(n - 1); }
int main() {
    int n;
    cout << "Enter number: "; cin >> n;
    cout << "Factorial(" << n << ") = " << factorial(n) << endl;
    return 0;
}
