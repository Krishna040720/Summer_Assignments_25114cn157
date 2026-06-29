#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[100], n = 0, ch;
    do {
        cout << "\n1.Input 2.Display 3.Sort 4.Search 5.Reverse 6.Exit: "; cin >> ch;
        if (ch == 1) {
            cout << "Size: "; cin >> n;
            for (int i = 0; i < n; i++) cin >> arr[i];
        } else if (ch == 2) { for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << endl; }
        else if (ch == 3) { sort(arr, arr+n); cout << "Sorted!" << endl; }
        else if (ch == 4) {
            int key; cout << "Search: "; cin >> key;
            bool f = false;
            for (int i = 0; i < n; i++) if (arr[i] == key) { cout << "Found at index " << i << endl; f = true; break; }
            if (!f) cout << "Not found." << endl;
        } else if (ch == 5) { reverse(arr, arr+n); cout << "Reversed!" << endl; }
    } while (ch != 6);
    return 0;
}
