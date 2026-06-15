#include <iostream>
using namespace std;
long long fibonacci(int n) { return (n <= 1) ? n : fibonacci(n-1) + fibonacci(n-2); }
int main() {
    int n;
    cout << "Enter n: "; cin >> n;
    cout << "First " << n << " Fibonacci numbers: ";
    for (int i = 0; i < n; i++) cout << fibonacci(i) << " ";
    cout << endl;
    return 0;
}
