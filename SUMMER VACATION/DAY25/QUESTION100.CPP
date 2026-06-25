#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    string s, word;
    cout << "Enter sentence: "; getline(cin, s);
    istringstream iss(s);
    vector<string> words;
    while (iss >> word) words.push_back(word);
    sort(words.begin(), words.end(), [](const string& a, const string& b){ return a.size() < b.size(); });
    cout << "Sorted by length: ";
    for (auto& w : words) cout << w << " ";
    cout << endl;
    return 0;
}
