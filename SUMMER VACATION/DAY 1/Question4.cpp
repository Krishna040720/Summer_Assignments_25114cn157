#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter number: ";
    cin >> n;
    if (n == 0) { cout << "Number of digits = 1" << endl; return 0; }
    int count = 0;
    n = (n < 0) ? -n : n;
    while (n > 0) { n /= 10; count++; }
    cout << "Number of digits = " << count << endl;
    return 0;
}