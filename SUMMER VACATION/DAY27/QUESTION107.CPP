#include <iostream>
#include <vector>
using namespace std;
struct Employee { string name; double basic, hra, da, gross, net; };
int main() {
    int n; cout << "Number of employees: "; cin >> n; cin.ignore();
    vector<Employee> emps(n);
    for (int i = 0; i < n; i++) {
        cout << "Name: "; getline(cin, emps[i].name);
        cout << "Basic salary: "; cin >> emps[i].basic; cin.ignore();
        emps[i].hra = 0.20 * emps[i].basic;
        emps[i].da  = 0.40 * emps[i].basic;
        emps[i].gross = emps[i].basic + emps[i].hra + emps[i].da;
        double pf = 0.12 * emps[i].basic;
        emps[i].net = emps[i].gross - pf;
    }
    cout << "\n--- Salary Slip ---" << endl;
    for (auto& e : emps) {
        cout << "Name: " << e.name << endl;
        cout << "Basic: " << e.basic << " | HRA: " << e.hra << " | DA: " << e.da << endl;
        cout << "Gross: " << e.gross << " | Net: " << e.net << endl << endl;
    }
    return 0;
}
