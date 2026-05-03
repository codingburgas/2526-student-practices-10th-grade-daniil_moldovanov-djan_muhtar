#include "admin.h"
#include "movie.h"
#include <iostream>

using namespace std;

Admin::Admin()
{
    username = "admin";
    password = "admin123";
}

bool Admin::login()
{
    string u, p;

    cout << "\n--- ADMIN LOGIN ---\n";

    cout << "Username: ";
    cin >> u;

    cout << "Password: ";
    cin >> p;

    cin.ignore(1000, '\n');

    return u == username && p == password;
}

void Admin::adminMenu()
{
    int choice;

    do
    {
        cout << "\n--- ADMIN PANEL ---\n";
        cout << "1. Add movie\n";
        cout << "2. Delete movie\n";
        cout << "3. List movies\n";
        cout << "0. Back\n";
        cout << "Choice: ";

        cin >> choice;
        cin.ignore(1000, '\n');

        switch (choice)
        {
        case 1:
            addMovie();
            break;

        case 2:
            deleteMovie();
            break;

        case 3:
            listMovies();
            break;

        case 0:
            cout << "Returning to main menu...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);
}