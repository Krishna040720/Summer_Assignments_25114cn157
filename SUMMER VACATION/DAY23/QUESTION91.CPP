#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s1, s2;
    cout << "Enter two strings: "; cin >> s1 >> s2;
    string a = s1, b = s2;
    sort(a.begin(), a.end()); sort(b.begin(), b.end());
    cout << (a == b ? "Anagram" : "Not anagram") << endl;
    return 0;
}
