#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cout << "Enter number: "; 
    cin >> n;
    if (n < 2)
     { cout << n << " is not prime." << endl; return 0;
     }
    bool prime = true;
    for (int i = 2; i <= (n); i++) {
        if (n % i == 0) { prime = false; break; }
    }
    cout << n << (prime ? " is" : " is not") << " a prime number." << endl;
    return 0;
}
