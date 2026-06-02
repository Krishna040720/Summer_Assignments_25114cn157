#include <iostream>
using namespace std;
int main() {
    long long n;
    cout << "Enter number: "; cin >> n;
    int  largest = -1;
    while (n % 2 == 0)
     {
         largest = 2; n /= 2;
         }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) { largest = i; n /= i; }
    }
    if (n > 2) largest = n;
    cout << "Largest prime factor = " << largest << endl;
    return 0;
}