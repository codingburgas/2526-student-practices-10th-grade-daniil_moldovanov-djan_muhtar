#include "a.h"
#include <iostream>

using namespace std;

Admin::Admin() {
    username = "admin";
    password = "admin123";
}

bool Admin::login() {
    string u, p;
    cout << "\n--- ADMIN LOGIN ---\n";
    cout << "Username: ";
    cin >> u;
    cout << "Password: ";
    cin >> p;

    return (u == username && p == password);
}

void Admin::adminMenu() {
    int choice;
    do {
        cout << "\n--- ADMIN PANEL ---\n";
        cout << "1. Add movie\n";
        cout << "2. Delete movie\n";
        cout << "0. Back\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Add movie logic here\n";
            break;
        case 2:
            cout << "Delete movie logic here\n";
            break;
        }
    } while (choice != 0);
}
