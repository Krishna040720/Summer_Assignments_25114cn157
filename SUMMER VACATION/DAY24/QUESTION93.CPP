#include <iostream>
using namespace std;
int main() {
    string s1, s2;
    cout << "Enter two strings: "; cin >> s1 >> s2;
    if (s1.size() != s2.size()) { cout << "Not a rotation." << endl; return 0; }
    string doubled = s1 + s1;
    cout << (doubled.find(s2) != string::npos ? "Is a rotation." : "Not a rotation.") << endl;
    return 0;
}
