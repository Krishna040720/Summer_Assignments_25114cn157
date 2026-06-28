#include <iostream>
#include <vector>
using namespace std;
struct Student { int id; string name; float gpa; };
int main() {
    vector<Student> students;
    int ch;
    do {
        cout << "\n1.Add 2.Display 3.Search 4.Exit: "; cin >> ch;
        if (ch == 1) {
            Student s; cout << "ID: "; cin >> s.id; cin.ignore();
            cout << "Name: "; getline(cin, s.name);
            cout << "GPA: "; cin >> s.gpa;
            students.push_back(s); cout << "Added!" << endl;
        } else if (ch == 2) {
            cout << "ID\tName\t\tGPA" << endl;
            for (auto& s : students) cout << s.id << "\t" << s.name << "\t\t" << s.gpa << endl;
        } else if (ch == 3) {
            int id; cout << "Search ID: "; cin >> id;
            for (auto& s : students) if (s.id == id) { cout << s.name << " - GPA: " << s.gpa << endl; }
        }
    } while (ch != 4);
    return 0;
}