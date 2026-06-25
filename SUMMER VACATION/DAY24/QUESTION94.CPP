#include <iostream>
using namespace std;
int main() {
    string s, res = "";
    cout << "Enter string: "; cin >> s;
    int i = 0;
    while (i < s.size()) {
        char c = s[i]; int cnt = 0;
        while (i < s.size() && s[i] == c) { cnt++; i++; }
        res += c;
        if (cnt > 1) res += to_string(cnt);
    }
    cout << "Compressed: " << res << endl;
    return 0;
}