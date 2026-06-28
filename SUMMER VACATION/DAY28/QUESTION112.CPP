#include <iostream>
#include <vector>
using namespace std;
struct Contact { string name, phone, email; };
int main() {
    vector<Contact> contacts;
    int ch;
    do {
        cout << "\n1.Add 2.Display 3.Search 4.Delete 5.Exit: "; cin >> ch; cin.ignore();
        if (ch == 1) {
            Contact c; cout << "Name: "; getline(cin, c.name);
            cout << "Phone: "; getline(cin, c.phone);
            cout << "Email: "; getline(cin, c.email);
            contacts.push_back(c); cout << "Saved!" << endl;
        } else if (ch == 2) {
            for (auto& c : contacts) cout << c.name << " | " << c.phone << " | " << c.email << endl;
        } else if (ch == 3) {
            string q; cout << "Search name: "; getline(cin, q);
            for (auto& c : contacts) if (c.name.find(q) != string::npos) cout << c.name << " | " << c.phone << endl;
        } else if (ch == 4) {
            string q; cout << "Delete name: "; getline(cin, q);
            for (auto it = contacts.begin(); it != contacts.end(); it++) {
                if (it->name == q) { contacts.erase(it); cout << "Deleted!" << endl; break; }
            }
        }
    } while (ch != 5);
    return 0;