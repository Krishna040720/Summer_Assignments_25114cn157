#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;
int main() {
    string s; int ch;
    do {
        cout << "\n1.Input 2.Length 3.Reverse 4.Upper 5.Lower 6.Palindrome 7.Exit: "; cin >> ch; cin.ignore();
        if (ch == 1) { cout << "String: "; getline(cin, s); }
        else if (ch == 2) cout << "Length = " << s.length() << endl;
        else if (ch == 3) { string r = s; reverse(r.begin(), r.end()); cout << "Reversed: " << r << endl; }
        else if (ch == 4) { string u = s; for (char& c : u) c = toupper(c); cout << u << endl; }
        else if (ch == 5) { string l = s; for (char& c : l) c = tolower(c); cout << l << endl; }
        else if (ch == 6) { string r = s; reverse(r.begin(), r.end()); cout << (s == r ? "Palindrome" : "Not palindrome") << endl; }
    } while (ch != 7);
    return 0;
}
