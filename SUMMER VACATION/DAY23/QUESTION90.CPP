#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    string s;
    cout << "Enter string: "; cin >> s;
    unordered_map<char,int> freq;
    for (char c : s) freq[c]++;
    for (char c : s) { if (freq[c] > 1) { cout << "First repeating: " << c << endl; return 0; } }
    cout << "No repeating character found." << endl;
    return 0;
}
