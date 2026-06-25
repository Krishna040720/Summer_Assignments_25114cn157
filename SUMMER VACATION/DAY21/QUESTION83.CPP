#include <iostream>
#include <cctype>
using namespace std;
int main() {
    string s; int v = 0, c = 0;
    cout << "Enter string: "; getline(cin, s);
    for (char ch : s) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    cout << "Vowels = " << v << ", Consonants = " << c << endl;
    return 0;
}
