#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
const int MAX = 100;
const int SUBJECTS = 5;
string subjectNames[SUBJECTS] = {"Maths", "Science", "English", "History", "CS"};

struct Student {
    int id, roll; string name, cls;
    int marks[SUBJECTS]; float pct; string grade;
};

// ---- helper functions ----
float calcPercent(int marks[], int n) {
    int s = 0; for (int i = 0; i < n; i++) s += marks[i];
    return s / (float)n;
}
string calcGrade(float p) { return p>=90?"A+":p>=80?"A":p>=70?"B":p>=60?"C":p>=50?"D":"F"; }
void printStudent(const Student& s) {
    cout << s.id << " | " << s.name << " | Class: " << s.cls
         << " | Roll: " << s.roll << " | " << s.pct << "% | " << s.grade << endl;
}
void printMarksheet(const Student& s) {
    cout << "\n====== MARKSHEET ======" << endl;
    cout << "ID: " << s.id << "  Name: " << s.name << "  Roll: " << s.roll << "  Class: " << s.cls << endl;
    int total = 0;
    for (int i = 0; i < SUBJECTS; i++) { cout << subjectNames[i] << ": " << s.marks[i] << endl; total += s.marks[i]; }
    cout << "Total: " << total << "/" << SUBJECTS*100 << endl;
    cout << "Percentage: " << s.pct << "% | Grade: " << s.grade << endl;
    cout << "Result: " << (s.pct >= 33 ? "PASS" : "FAIL") << endl;
}

int main() {
    Student students[MAX]; int n = 0, ch;
    cout << "======================================" << endl;
    cout << "  SCHOOL MANAGEMENT SYSTEM (C++)" << endl;
    cout << "======================================" << endl;
    do {
        cout << "\n1.Admit Student 2.All Students 3.Marksheet 4.Search" << endl;
        cout << "5.Class Topper 6.Pass/Fail List 7.Delete 8.Exit" << endl;
        cout << "Choice: "; cin >> ch;

        if (ch == 1 && n < MAX) {
            Student& s = students[n];
            s.id = n + 1; cin.ignore();
            cout << "Name: "; getline(cin, s.name);
            cout << "Class: "; getline(cin, s.cls);
            cout << "Roll No: "; cin >> s.roll;
            cout << "Enter marks for " << SUBJECTS << " subjects:" << endl;
            for (int i = 0; i < SUBJECTS; i++) { cout << subjectNames[i] << ": "; cin >> s.marks[i]; }
            s.pct = calcPercent(s.marks, SUBJECTS);
            s.grade = calcGrade(s.pct);
            n++; cout << "Student admitted! ID: " << n << endl;

        } else if (ch == 2) {
            if (n == 0) { cout << "No students!" << endl; continue; }
            cout << "\nID | Name | Class | Roll | % | Grade" << endl;
            for (int i = 0; i < n; i++) printStudent(students[i]);

        } else if (ch == 3) {
            int id; cout << "Student ID: "; cin >> id;
            bool f = false;
            for (int i = 0; i < n; i++) if (students[i].id == id) { printMarksheet(students[i]); f = true; }
            if (!f) cout << "Not found!" << endl;

        } else if (ch == 4) {
            string q; cin.ignore(); cout << "Search name: "; getline(cin, q);
            for (int i = 0; i < n; i++) if (students[i].name.find(q) != string::npos) printStudent(students[i]);

        } else if (ch == 5) {
            if (n == 0) { cout << "No students!" << endl; continue; }
            string cls; cin.ignore(); cout << "Class: "; getline(cin, cls);
            int ti = -1;
            for (int i = 0; i < n; i++) if (students[i].cls == cls) { if (ti == -1 || students[i].pct > students[ti].pct) ti = i; }
            if (ti == -1) cout << "No students in this class!" << endl;
            else { cout << "Topper: "; printStudent(students[ti]); }

        } else if (ch == 6) {
            cout << "\n--- PASS ---" << endl;
            for (int i = 0; i < n; i++) if (students[i].pct >= 33) printStudent(students[i]);
            cout << "--- FAIL ---" << endl;
            for (int i = 0; i < n; i++) if (students[i].pct < 33) printStudent(students[i]);

        } else if (ch == 7) {
            int id; cout << "Delete ID: "; cin >> id;
            for (int i = 0; i < n; i++) if (students[i].id == id) {
                for (int j = i; j < n-1; j++) students[j] = students[j+1]; n--; cout << "Deleted!" << endl; break;
            }
        }
    } while (ch != 8);
    cout << "Thank you for using School Management System!" << endl;
    return 0;
}
