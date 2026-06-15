#include <iostream>
using namespace std;
bool isPalindrome(long long n) {
    long long orig = n, rev = 0;
    while (n > 0) { rev = rev * 10 + n % 10; n /= 10; }
    return orig == rev;
}
int main() {
    long long n;
    cout << "Enter number: "; cin >> n;
    cout << n << (isPalindrome(n) ? " is" : " is not") << " a palindrome." << endl;
    return 0;
}