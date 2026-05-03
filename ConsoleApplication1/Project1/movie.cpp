#include "movie.h"
#include <iostream>
#include <string>

using namespace std;

const int MAX_MOVIES = 100;

string movieTitles[MAX_MOVIES];
string movieLanguages[MAX_MOVIES];
string movieGenres[MAX_MOVIES];
string movieReleaseDates[MAX_MOVIES];

int movieCount = 0;

void listMovies()
{
    cout << "\n--- MOVIE LIST ---\n";

    if (movieCount == 0)
    {
        cout << "No movies available.\n";
        return;
    }

    for (int i = 0; i < movieCount; i++)
    {
        cout << "Movie number: " << i + 1 << "\n";
        cout << "Title: " << movieTitles[i] << "\n";
        cout << "Language: " << movieLanguages[i] << "\n";
        cout << "Genre: " << movieGenres[i] << "\n";
        cout << "Release date: " << movieReleaseDates[i] << "\n";
        cout << "-------------------------\n";
    }
}

void addMovie()
{
    if (movieCount >= MAX_MOVIES)
    {
        cout << "Cannot add more movies.\n";
        return;
    }

    cout << "\n--- ADD MOVIE ---\n";

    cout << "Title: ";
    getline(cin, movieTitles[movieCount]);

    cout << "Language: ";
    getline(cin, movieLanguages[movieCount]);

    cout << "Genre: ";
    getline(cin, movieGenres[movieCount]);

    cout << "Release date: ";
    getline(cin, movieReleaseDates[movieCount]);

    movieCount++;

    cout << "Movie added successfully!\n";
}

void deleteMovie()
{
    if (movieCount == 0)
    {
        cout << "There are no movies to delete.\n";
        return;
    }

    listMovies();

    int number;

    cout << "Enter movie number to delete: ";
    cin >> number;
    cin.ignore(1000, '\n');

    if (number < 1 || number > movieCount)
    {
        cout << "Invalid movie number.\n";
        return;
    }

    int index = number - 1;

    for (int i = index; i < movieCount - 1; i++)
    {
        movieTitles[i] = movieTitles[i + 1];
        movieLanguages[i] = movieLanguages[i + 1];
        movieGenres[i] = movieGenres[i + 1];
        movieReleaseDates[i] = movieReleaseDates[i + 1];
    }

    movieCount--;

    cout << "Movie deleted successfully!\n";
}