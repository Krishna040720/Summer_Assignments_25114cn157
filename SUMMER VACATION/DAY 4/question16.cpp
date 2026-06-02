#include <iostream>
#include <cmath>
using namespace std;
bool isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;
    while (temp > 0) { digits++; temp /= 10; }
    temp = n;
    while (temp > 0) { sum += pow(temp % 10, digits); temp /= 10; }
    return sum == n;
}
int main() {
    int a, b;
    cout << "Enter range [a, b]: "; cin >> a >> b;
    cout << "Armstrong numbers: ";
    for (int i = a; i <= b; i++) if (isArmstrong(i)) cout << i << " ";
    cout << endl;
    return 0;
}