#include <iostream>
using namespace std;
int main() {
    string name; int roll;
    int marks[5]; string subjects[] = {"Maths","Physics","Chemistry","English","CS"};
    cout << "Enter name: "; cin.ignore(); getline(cin, name);
    cout << "Enter roll no: "; cin >> roll;
    int total = 0;
    for (int i = 0; i < 5; i++) {
        cout << subjects[i] << " marks (/100): "; cin >> marks[i]; total += marks[i];
    }
    double pct = total / 5.0;
    string grade = (pct>=90?"A+":pct>=80?"A":pct>=70?"B":pct>=60?"C":pct>=50?"D":"F");
    cout << "\n===== MARKSHEET =====" << endl;
    cout << "Name: " << name << "  Roll: " << roll << endl;
    for (int i=0;i<5;i++) cout << subjects[i] << ": " << marks[i] << endl;
    cout << "Total: " << total << "/500" << endl;
    cout << "Percentage: " << pct << "%" << endl;
    cout << "Grade: " << grade << endl;
    cout << (pct >= 40 ? "Result: PASS" : "Result: FAIL") << endl;
    return 0;
}
