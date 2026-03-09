#include "menu.h"

int main()
{
    int choice;

    do
    {
        showMenu();
        choice = getMenuChoice();
        handleMenuChoice(choice);

    } while (choice != 0);

}
