#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string s, word; int count = 0;
    cout << "Enter sentence: "; getline(cin, s);
    istringstream iss(s);
    while (iss >> word) count++;
    cout << "Word count = " << count << endl;
    return 0;
}
