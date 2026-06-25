#include <iostream>
using namespace std;
int main() {
    string s, res = "";
    cout << "Enter string: "; getline(cin, s);
    for (char c : s) if (c != ' ') res += c;
    cout << "Without spaces: " << res << endl;
    return 0;
}
