#include <iostream>
#include "menu.h"
#include "admin.h"
#include "movie.h"
using namespace std;

void showMenu()
{
    cout << "\n=========== MOVIE TICKET SYSTEM ===========\n";
    cout << "1. List movies\n";
    cout << "2. Book a ticket\n";
    cout << "3. View bookings\n";
    cout << "4. Admin panel\n";
    cout << "0. Exit\n";
    cout << "===========================================\n";
}

int getMenuChoice()
{
    int choice;

    cout << "Choice: ";
    cin >> choice;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input! Enter a number: ";
        cin >> choice;
    }

    cin.ignore(1000, '\n');

    return choice;
}

void handleMenuChoice(int choice)
{
    switch (choice)
    {
    case 1:
        listMovies();
        break;

    case 2:
        cout << "Booking a ticket is not ready yet.\n";
        break;

    case 3:
        cout << "View bookings is not ready yet.\n";
        break;

    case 4:
    {
        Admin admin;

        if (admin.login())
        {
            admin.adminMenu();
        }
        else
        {
            cout << "Access denied!\n";
        }

        break;
    }

    case 0:
        cout << "Exiting system...\n";
        break;

    default:
        cout << "Invalid choice!\n";
    }
}