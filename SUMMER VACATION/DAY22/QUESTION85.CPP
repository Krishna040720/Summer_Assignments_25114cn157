#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s;
    cout << "Enter string: "; cin >> s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    cout << s << (s == rev ? " is" : " is not") << " a palindrome." << endl;
    return 0;
}
