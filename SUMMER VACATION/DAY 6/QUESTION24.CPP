#include <iostream>
using namespace std;
long long power(long long x, int n) {
    if (n == 0) return 1;
    long long half = power(x, n / 2);
    return (n % 2 == 0) ? half * half : x * half * half;
}
int main() {
    int  x;
     int n;
    cout << "Enter base x and exponent n: "; 
    cin >> x >> n;
    cout << x << "^" << n << " = " << power(x, n) << endl;
    return 0;
}
