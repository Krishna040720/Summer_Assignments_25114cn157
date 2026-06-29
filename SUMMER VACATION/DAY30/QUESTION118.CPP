#include <iostream>
#include <string>
using namespace std;
const int MAX = 50;
struct Book { int id; string title, author; bool issued; string issuedTo; };
int main() {
    Book books[MAX]; int n = 0, ch;
    do {
        cout << "\n1.Add Book 2.Display 3.Issue 4.Return 5.Search 6.Exit: "; cin >> ch;
        if (ch == 1 && n < MAX) {
            books[n].id = n + 1; cin.ignore();
            cout << "Title: "; getline(cin, books[n].title);
            cout << "Author: "; getline(cin, books[n].author);
            books[n].issued = false; n++; cout << "Book ID: " << n << endl;
        } else if (ch == 2) {
            for (int i = 0; i < n; i++) cout << books[i].id << " | " << books[i].title << " | " << books[i].author << " | " << (books[i].issued ? "Issued to: " + books[i].issuedTo : "Available") << endl;
        } else if (ch == 3) {
            int id; cout << "Book ID: "; cin >> id; cin.ignore();
            if (id > 0 && id <= n && !books[id-1].issued) {
                cout << "Member: "; getline(cin, books[id-1].issuedTo);
                books[id-1].issued = true; cout << "Issued!" << endl;
            } else cout << "Not available!" << endl;
        } else if (ch == 4) {
            int id; cout << "Book ID: "; cin >> id; cin.ignore();
            if (id > 0 && id <= n && books[id-1].issued) {
                books[id-1].issued = false; cout << "Returned!" << endl;
            } else cout << "Invalid ID or not issued!" << endl;
        } else if (ch == 5) {
            int id; cout << "Book ID: "; cin >> id; cin.ignore();
            if (id > 0 && id <= n) {
                cout << "Title: " << books[id-1].title << endl;
                cout << "Author: " << books[id-1].author << endl;
                cout << "Status: " << (books[id-1].issued ? "Issued to: " + books[id-1].issuedTo : "Available") << endl;
            } else cout << "Invalid ID!" << endl;
        }
    } while (ch != 6);