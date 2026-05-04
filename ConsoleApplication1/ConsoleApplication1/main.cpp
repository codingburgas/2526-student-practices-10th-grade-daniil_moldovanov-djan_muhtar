#include "menu.h"
#include "movie.h"

int main()
{
    loadMoviesFromFile(); 

        int choice;
    do
    {
        showMenu();
        choice = getMenuChoice();
        handleMenuChoice(choice);
    } while (choice != 0);

    return 0;
}