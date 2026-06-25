#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string s;
    cout << "Enter string: "; cin >> s;
    unordered_map<char,int> freq;
    for (char c : s) freq[c]++;
    char maxC = s[0]; int maxF = 0;
    for (auto& p : freq) if (p.second > maxF) { maxF = p.second; maxC = p.first; }
    cout << "Max occurring: '" << maxC << "' (" << maxF << " times)" << endl;
    return 0;
}
