#include <iostream>
#include <vector>
using namespace std;
struct Item { int id; string name; int qty; double price; };
int main() {
    vector<Item> inventory;
    int ch;
    do {
        cout << "\n1.Add 2.Display 3.Update Qty 4.Delete 5.Search 6.Exit: "; cin >> ch;
        if (ch == 1) {
            Item it; cout << "ID: "; cin >> it.id; cin.ignore();
            cout << "Name: "; getline(cin, it.name);
            cout << "Qty: "; cin >> it.qty;
            cout << "Price: "; cin >> it.price;
            inventory.push_back(it); cout << "Added!" << endl;
        } else if (ch == 2) {
            cout << "ID\tName\t\tQty\tPrice" << endl;
            for (auto& i : inventory) cout << i.id << "\t" << i.name << "\t\t" << i.qty << "\t" << i.price << endl;
        } else if (ch == 3) {
            int id, q; cout << "ID: "; cin >> id; cout << "New Qty: "; cin >> q;
            for (auto& i : inventory) if (i.id == id) { i.qty = q; cout << "Updated!" << endl; }
        } else if (ch == 4) {
            int id; cout << "ID: "; cin >> id;
            for (auto it = inventory.begin(); it != inventory.end(); it++) if (it->id == id) { inventory.erase(it); cout << "Deleted!" << endl; break; }
        } else if (ch == 5) {