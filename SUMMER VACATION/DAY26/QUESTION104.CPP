#include <iostream>
using namespace std;
int main() {
    string questions[] = {
        "What is 5 + 3?", "Capital of France?", "Which planet is closest to sun?"
    };
    string options[][4] = {
        {"A.6","B.7","C.8","D.9"}, {"A.Berlin","B.Paris","C.Rome","D.Madrid"},
        {"A.Earth","B.Venus","C.Mercury","D.Mars"}
    };
    char answers[] = {'C', 'B', 'C'};
    int score = 0;
    cout << "=== Quiz Application ===" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "\nQ" << i+1 << ": " << questions[i] << endl;
        for (int j = 0; j < 4; j++) cout << options[i][j] << "  ";
        char ans; cout << "\nAnswer: "; cin >> ans;
        ans = toupper(ans);
        if (ans == answers[i]) { cout << "Correct!" << endl; score++; }
        else cout << "Wrong! Answer: " << answers[i] << endl;
    }
    cout << "\nScore: " << score << "/3" << endl;
    return 0;