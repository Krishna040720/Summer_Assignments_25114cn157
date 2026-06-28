#include <iostream>
#include <vector>
using namespace std;
struct Ticket { int id; string name, destination; int seats; };
int main() {
    vector<Ticket> tickets;
    int totalSeats = 50, bookedSeats = 0, ch;
    do {
        cout << "\n1.Book 2.Cancel 3.Available 4.All Bookings 5.Exit: "; cin >> ch;
        if (ch == 1) {
            if (bookedSeats >= totalSeats) { cout << "No seats!" << endl; continue; }
            Ticket t; static int nextId = 1; t.id = nextId++;
            cin.ignore(); cout << "Name: "; getline(cin, t.name);
            cout << "Destination: "; getline(cin, t.destination);
            cout << "Seats: "; cin >> t.seats;
            bookedSeats += t.seats; tickets.push_back(t);
            cout << "Booked! Ticket ID: " << t.id << endl;
        } else if (ch == 2) {
            int id; cout << "Ticket ID: "; cin >> id;
            for (auto it = tickets.begin(); it != tickets.end(); it++) {
                if (it->id == id) { bookedSeats -= it->seats; tickets.erase(it); cout << "Cancelled!" << endl; break; }
            }
        } else if (ch == 3) cout << "Available seats: " << totalSeats - bookedSeats << endl;
        else if (ch == 4) for (auto& t : tickets) cout << t.id << " | " << t.name << " | " << t.destination << " | " << t.seats << " seats" << endl;
    } while (ch != 5);
    return 0;