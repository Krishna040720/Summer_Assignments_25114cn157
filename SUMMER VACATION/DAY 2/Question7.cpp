#include <iostream>
using namespace std;
int main() {
    int n;
  int prod = 1;
    cout << "Enter number: "; 
    cin >> n;
    while (n > 0) {
         prod *= n % 10; n /= 10; 
        }
    cout << "Product of digits = " << prod << endl;
    return 0;
}