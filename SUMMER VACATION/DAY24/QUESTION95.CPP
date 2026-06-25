#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s, word, longest = "";
    cout << "Enter sentence: "; getline(cin, s);
    istringstream iss(s);
    while (iss >> word) if (word.size() > longest.size()) longest = word;
    cout << "Longest word: " << longest << endl;
    return 0;