#include <iostream>
#include <vector>
using namespace std;
struct Book { int id; string title, author; bool available; };
int main() {
    vector<Book> books;
    int ch;
    do {
        cout << "\n1.Add Book 2.Display 3.Issue 4.Return 5.Exit: "; cin >> ch;
        if (ch == 1) {
            Book b; cout << "ID: "; cin >> b.id; cin.ignore();
            cout << "Title: "; getline(cin, b.title);
            cout << "Author: "; getline(cin, b.author);
            b.available = true; books.push_back(b); cout << "Added!" << endl;
        } else if (ch == 2) {
            for (auto& b : books) cout << b.id << " | " << b.title << " | " << b.author << " | " << (b.available ? "Available" : "Issued") << endl;
        } else if (ch == 3) {
            int id; cout << "Book ID: "; cin >> id;
            for (auto& b : books) if (b.id == id) { b.available = false; cout << "Issued!" << endl; }
        } else if (ch == 4) {
            int id; cout << "Book ID: "; cin >> id;
            for (auto& b : books) if (b.id == id) { b.available = true; cout << "Returned!" << endl; }
        }
    } while (ch != 5);
    return 0;
}
