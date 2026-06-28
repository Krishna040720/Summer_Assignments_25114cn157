#include <iostream>
using namespace std;
int main() {
    string name; int age;
    cout << "=== Voting Eligibility System ===" << endl;
    cout << "Enter name: "; getline(cin, name);
    cout << "Enter age: "; cin >> age;
    cout << name << (age >= 18 ? " is eligible to vote." : " is NOT eligible to vote.") << endl;
    return 0;
}
