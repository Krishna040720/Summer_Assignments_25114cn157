#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter number of names: "; cin >> n; cin.ignore();
    vector<string> names(n);
    for (int i=0;i<n;i++) { cout << "Name " << i+1 << ": "; getline(cin, names[i]); }
    sort(names.begin(), names.end());
    cout << "Sorted names:" << endl;