#include <iostream>
using namespace std;
int main() {
    double balance = 10000.0;
    int pin, choice;
    cout << "=== ATM Simulation ===" << endl;
    cout << "Enter PIN: "; cin >> pin;
    if (pin != 1234) { cout << "Invalid PIN!" << endl; return 0; }
    do {
        cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) cout << "Balance: Rs." << balance << endl;
        else if (choice == 2) {
            double amt; cout << "Amount: "; cin >> amt;
            if (amt > 0) { balance += amt; cout << "Deposited Rs." << amt << endl; }
        }
        else if (choice == 3) {
            double amt; cout << "Amount: "; cin >> amt;
            if (amt > balance) cout << "Insufficient balance!" << endl;
            else { balance -= amt; cout << "Withdrawn Rs." << amt << endl; }
        }
    } while (choice != 4);
    cout << "Thank you!" << endl;
    return 0;
}