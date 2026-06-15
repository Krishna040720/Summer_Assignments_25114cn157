#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cout << "Enter size: "; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    unordered_map<int,int> freq;
    for (int i = 0; i < n; i++) freq[arr[i]]++;
    cout << "Duplicates: ";
    for (auto& p : freq) if (p.second > 1) cout << p.first << " ";
    cout << endl;
    return 0;
}
