#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s;
    cout << "Enter string: "; getline(cin, s);
    for (char& ch : s) ch = toupper(ch);
    cout << "Uppercase: " << s << endl;
    return 0;
}
