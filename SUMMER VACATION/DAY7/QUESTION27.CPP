#include <iostream>
using namespace std;
int sumDigits(long long n) { return (n == 0) ? 0 : n % 10 + sumDigits(n / 10); }
int main() {
    long long n;
    cout << "Enter number: "; cin >> n;
    cout << "Sum of digits = " << sumDigits(n) << endl;
    return 0;
}
