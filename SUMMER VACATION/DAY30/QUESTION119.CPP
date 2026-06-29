#include <iostream>
#include <string>
#include <iomanip>  // for setw
using namespace std;

const int MAX = 100;

struct Employee {
    int id;
    string name, dept;
    double basic, hra, da, gross, net, tax;
};

void calcSalary(Employee& e) {
    e.hra = 0.20 * e.basic;
    e.da = 0.40 * e.basic;
    e.gross = e.basic + e.hra + e.da;
    e.tax = e.gross > 50000 ? 0.20 * e.gross :
            e.gross > 25000 ? 0.10 * e.gross : 0;
    e.net = e.gross - e.tax;
}

int main() {
    Employee emps[MAX];
    int n = 0, ch;

    do {
        cout << "\n1.Add 2.Display 3.Search 4.Update 5.Delete 6.Payslip 7.Exit: ";
        cin >> ch;

        if (ch == 1 && n < MAX) {
            emps[n].id = n + 1;
            cin.ignore();
            cout << "Name: ";
            getline(cin, emps[n].name);
            cout << "Dept: ";
            getline(cin, emps[n].dept);
            cout << "Basic Salary: ";
            cin >> emps[n].basic;
            calcSalary(emps[n]);
            n++;
            cout << "Employee added with ID: " << n << endl;
        } 
        else if (ch == 2) {
            cout << left << setw(5) << "ID" 
                 << setw(15) << "Name" 
                 << setw(15) << "Dept" 
                 << setw(12) << "Net Salary" << endl;
            cout << "---------------------------------------------------\n";
            for (int i = 0; i < n; i++) {
                cout << left << setw(5) << emps[i].id
                     << setw(15) << emps[i].name
                     << setw(15) << emps[i].dept
                     << setw(12) << emps[i].net << endl;
            }
        }

        // TODO: implement Search, Update, Delete, Payslip

    } while (ch != 7);

    return 0;
}
