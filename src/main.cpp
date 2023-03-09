#include <iostream>
#include "../include/SearchClass.h"
#include <stdlib.h>

using namespace std;

void printHelp(){
    cout << "--HELP--" << endl;
    cout << endl;

    cout << "\tEnter the option number for your choice" << endl;
    cout << "\tFor example: " << endl;
    cout << "\t1. Search for MOVIE" << endl;
    cout << "\tEnter 1 to search for a movie" << endl;
    cout << endl;
}

void movieOption(SearchClass search){
    cout << "Search for movie" << endl;

    //will call function that handles searching for movie
}

void bookOption(SearchClass search){
    cout << "Search for book" << endl;
    search.SearchBookByTitle("Crime and Punishment");
    //will call function that handles searching for book
}

void showOption(SearchClass search){
    cout << "Search for show" << endl;
    //will call function that handles searching for show
}

void recommendationOption(SearchClass search){
    string choice;
    //system ("clear");
    cout << "--Recommendations--" << endl;
    cout << "Do you want recommendations for: " << endl;
    cout << "\t1. Movies" << endl;
    cout << "\t2. Books" << endl;
    cout << "\t3. Shows" << endl;
    cout << "\t4. Go back to main menu" << endl;
    cout << endl;
    cout << "Enter your choice: ";
    getline(cin, choice);
    cout << endl;
    if(choice == "1" || choice == "1."){
        cout << "Movie recommendation" << endl << flush;
        //call movie recommender
    }
    else if(choice == "2" || choice == "2."){
        cout << "Book recommendation" << endl << flush;
        //call book recommender
    }
    else if(choice == "3" || choice == "3."){
        cout << "Show recommendation" << endl << flush;
        //call show recommender
    }
    else if(choice == "4" || choice == "4."){
        cout << "Returning back to main menu." << endl << flush;
    }
    else{
        cout << "INVALID CHOICE" << endl << flush;
        cout << "Returning back to main menu." << endl << flush;
    }
}

void printMenu(SearchClass search){
    /*
    MediaBowl

    Instructions:
        Enter the option number for your choice

    Menu:
        1. Search for a MOVIE by title
        2. Search for a BOOK by title
        3. Search for a SHOW by title
        4. Get recommendations
        5. Help
        6. Quit

    Enter your choice:
    */

    cout << endl;
    cout << "----------------------------------------------------------------" << endl;

    cout << "MediaBowl" << endl;
    cout << endl;

    cout << "Instructions:" << endl;
    cout << "\tEnter the option number for your choice" << endl;
    cout << endl;

    string choice;

    do{
        cout << "Menu:" << endl;
        cout << "\t1. Search for MOVIE" << endl;
        cout << "\t2. Search for BOOK" << endl;
        cout << "\t3. Search for a SHOW" << endl;
        cout << "\t4. Get recommendations" << endl;
        cout << "\t5. Help" << endl;
        cout << "\t6. Quit" << endl;
        cout << endl;

        cout << "Enter your choice: ";
        getline(cin, choice);
        cout << endl;
        if(choice == "1" || choice == "1."){
            movieOption(search);
        }
        else if(choice == "2" || choice == "2."){
            bookOption(search);
        }
        else if(choice == "3" || choice == "3."){
            showOption(search);
        }
        else if(choice == "4" || choice == "4."){
            recommendationOption(search);
        }
        else if(choice == "5" || choice == "5." || choice == "h" || choice == "help"){
            printHelp();
        }
        else if(choice == "p" || choice == "penguin"){
            cout << " ('v')" << endl;
            cout << "//-=-\\\\" << endl;
            cout << " (_=/)" << endl;
            cout << " ^^ ^^" << endl;
        }
        else if(choice == "6" || choice == "6." || choice == "q" || choice == "quit"){
            cout << "Quitting MediaBowl" << endl;
        }
        else{
            cout << endl;
            cout << "INVALID CHOICE" << endl;
            cout << "Please enter the number associated with your choice." << endl;
            cout << endl;
        }
        cout << endl;
        cout << "----------------------------------------------------------------" << endl;
        getch();
        system ("clear");

    }while(choice != "6" && choice != "6." && choice != "q" && choice != "quit");

    cout << "Thank you." << endl;
    cout << endl;
}

int main(){

//string bookFile = "TestBooks.txt";
//string movieShowFile = "WebScrapedMS.txt";

// searching.SearchBookByTitle("Crime and Punishment");
// searching.SearchMovieByTitle("Magic Mike");
// searching.SearchShowByTitle("Gilmore Girls");
// searching.SearchBookByGenre("Crime");
// searching.SearchMovieByActor("Channing Tatum");

//This will need to be error handled because the name can be wrong

string bookFile, movieFile;
cout << "Enter the name of the book file: ";
getline(cin, bookFile);
cout << "Enter the name of the movie file: ";
getline(cin, movieFile);

/*
('v')
//-=-\
(_=/)
 ^^ ^^
*/

SearchClass searching(bookFile, movieFile);

printMenu(searching);

return 0;

}

