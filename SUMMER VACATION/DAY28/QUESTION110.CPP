#include <iostream>
#include <vector>
using namespace std;
struct Account { int accNo; string name; double balance; };
int main() {
    vector<Account> accounts;
    int ch;
    do {
        cout << "\n1.Create 2.Deposit 3.Withdraw 4.Balance 5.Exit: "; cin >> ch;
        if (ch == 1) {
            Account a; cout << "Acc No: "; cin >> a.accNo; cin.ignore();
            cout << "Name: "; getline(cin, a.name);
            cout << "Initial deposit: "; cin >> a.balance;
            accounts.push_back(a); cout << "Account created!" << endl;
        } else if (ch == 2 || ch == 3 || ch == 4) {
            int id; cout << "Account No: "; cin >> id;
            for (auto& a : accounts) {
                if (a.accNo == id) {
                    if (ch == 2) { double amt; cout << "Amount: "; cin >> amt; a.balance += amt; cout << "Deposited!" << endl; }
                    else if (ch == 3) { double amt; cout << "Amount: "; cin >> amt; if (amt > a.balance) cout << "Insufficient!" << endl; else { a.balance -= amt; cout << "Withdrawn!" << endl; } }
                    else cout << "Balance: Rs." << a.balance << endl;
                }
            }
        }
    } while (ch != 5);
    return 0;
}