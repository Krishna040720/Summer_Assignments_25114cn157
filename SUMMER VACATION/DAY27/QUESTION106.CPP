#include <iostream>
#include <vector>
using namespace std;
struct Employee { int id; string name; string dept; double salary; };
int main() {
    vector<Employee> emps;
    int ch;
    do {
        cout << "\n1.Add 2.Display 3.Search 4.Exit: "; cin >> ch;
        if (ch == 1) {
            Employee e; cout << "ID: "; cin >> e.id; cin.ignore();
            cout << "Name: "; getline(cin, e.name);
            cout << "Dept: "; getline(cin, e.dept);
            cout << "Salary: "; cin >> e.salary;
            emps.push_back(e); cout << "Added!" << endl;
        } else if (ch == 2) {
            for (auto& e : emps) cout << e.id << " " << e.name << " " << e.dept << " Rs." << e.salary << endl;
        } else if (ch == 3) {
            int id; cout << "Search ID: "; cin >> id;
            for (auto& e : emps) if (e.id == id) cout << e.name << " | " << e.dept << " | Rs." << e.salary << endl;
        }
    } while (ch != 4);
    return 0;
}
