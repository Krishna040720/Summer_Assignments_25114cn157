#include <iostream>
using namespace std;
int main() {
    int  n, orig, rev = 0;
    cout << "Enter number: "; cin >> n;
    orig = n;
    while (n > 0) {
         rev = rev * 10 + n % 10; n /= 10; 
        }
    cout << orig << (orig == rev ? " is" : " is not") << " a palindrome." << endl;
    return 0;
}