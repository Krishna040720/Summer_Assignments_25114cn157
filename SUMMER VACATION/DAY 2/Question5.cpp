#include <iostream>
using namespace std;
int main() {
    int  n; 
    int sum = 0;
    cout << "Enter number: ";
     cin >> n;
    n = (n < 0) ? -n : n;
    while (n > 0) 
    { sum += n % 10; n /= 10; 
    }
    cout << "Sum of digits = " << sum << endl;
    return 0;
}