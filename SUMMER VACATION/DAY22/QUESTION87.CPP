#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string s;
    cout << "Enter string: "; getline(cin, s);
    unordered_map<char,int> freq;
    for (char c : s) if (c != ' ') freq[c]++;
    cout << "Character frequencies:" << endl;
    for (auto& p : freq) cout << p.first << ": " << p.second << endl;
    return 0;
}
