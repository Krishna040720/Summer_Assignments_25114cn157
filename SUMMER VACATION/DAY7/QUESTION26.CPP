#include <iostream>
using namespace std;
long long fib(int n) { return (n <= 1) ? n : fib(n-1) + fib(n-2); }
int main() {
    int n;
    cout << "Enter n: "; cin >> n;
    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    return 0;
}
