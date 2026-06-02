#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string bin;
    cout << "Enter binary number: "; 
    cin >> bin;
    int dec = 0;
    for (int i = 0; i < bin.size(); i++){
        dec += (bin[bin.size()-1-i] - '0') * pow(2, i);
    }
    cout << "Decimal = " << dec << endl;
    return 0;
}
