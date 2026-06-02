#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    int sum = n * (n + 1) / 2;
    cout << "Sum of first " << n << " natural numbers = " << sum << endl;
    return 0;
}
