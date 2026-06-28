#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int secret = rand() % 100 + 1, guess, attempts = 0;
    cout << "=== Number Guessing Game ===" << endl;
    cout << "Guess a number between 1 and 100:" << endl;
    do {
        cout << "Your guess: "; cin >> guess; attempts++;
        if (guess < secret) cout << "Too low!" << endl;
        else if (guess > secret) cout << "Too high!" << endl;
        else cout << "Correct! Guessed in " << attempts << " attempts." << endl;
    } while (guess != secret);
    return 0;
}