#include <iostream>
using namespace std;
long long factorial(int n) { long long f = 1; for (int i = 2; i <= n; i++) f *= i; return f; }
int main() {
    int n, orig, sum = 0;
     int temp;
    cout << "Enter number: ";
     cin >> n;
    orig = n; temp = n;
    while (temp > 0) {
         sum += factorial(temp % 10); temp /= 10;
         }
    cout << n << (sum == orig ? " is" : " is not") << " a strong number." << endl;
    return 0;
}
