#include <iostream>
using namespace std;
int main() {
    int n; int sum = 0;
    cout << "Enter number: ";
     cin >> n;
    for (int i = 1; i < n; i++){
     if (n % i == 0) sum += i;
    }
    cout << n << (sum == n ? " is" : " is not") << " a perfect number." << endl;
    return 0;
}