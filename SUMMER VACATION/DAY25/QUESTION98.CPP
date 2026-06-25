#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    string s1, s2;
    cout << "Enter two strings: "; cin >> s1 >> s2;
    unordered_set<char> set1(s1.begin(), s1.end()), common;
    for (char c : s2) if (set1.count(c)) common.insert(c);
    cout << "Common characters: ";
    for (char c : common) cout << c << " ";
    cout << endl;
    return 0;
}
