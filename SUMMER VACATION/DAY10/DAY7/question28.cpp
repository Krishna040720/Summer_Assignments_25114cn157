#include <iostream>
using namespace std;
long long rev = 0, base = 1;
void reverse(long long n) {
    if (n == 0) return;
    reverse(n / 10);
    rev += (n % 10) * base;
    base *= 10;
}
int main() {
    long long n;
    cout << "Enter number: "; cin >> n;
    reverse(n);
    cout << "Reversed = " << rev << endl;
    return 0;
}
