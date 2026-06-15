#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int n) {
    int temp = n, sum = 0, d = 0;
    while (temp) { d++; temp /= 10; }
    temp = n;
    while (temp) { sum += pow(temp % 10, d); temp /= 10; }
    return sum == n;
}
int main() {
    int n;
    cout << "Enter number: "; cin >> n;
    cout << n << (isArmstrong(n) ? " is" : " is not") << " an Armstrong number." << endl;
    return 0;
}
