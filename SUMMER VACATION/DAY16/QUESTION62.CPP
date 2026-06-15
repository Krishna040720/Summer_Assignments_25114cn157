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
    int maxFreq = 0, maxElem = arr[0];
    for (auto& p : freq) if (p.second > maxFreq) { maxFreq = p.second; maxElem = p.first; }
    cout << "Max frequency element = " << maxElem << " (frequency: " << maxFreq << ")" << endl;
    return 0;
}
