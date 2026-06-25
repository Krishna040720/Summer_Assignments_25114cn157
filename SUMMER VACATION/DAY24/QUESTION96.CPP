#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    string s, res = "";
    cout << "Enter string: "; cin >> s;
    unordered_set<char> seen;
    for (char c : s) { if (!seen.count(c)) { res += c; seen.insert(c); } }
    cout << "After removing duplicates: " << res << endl;
    return 0;
}
