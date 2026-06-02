#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter decimal number: ";
     cin >> n;
    if (n == 0)
     { 
        cout << "Binary: 0" << endl; return 0;
     }
    string bin = "";
    int temp = n;
    while (temp > 0) {
         bin = (char)('0' + temp % 2) + bin; temp /= 2;
         }
    cout << n << " in binary = " << bin << endl;
    return 0;
}