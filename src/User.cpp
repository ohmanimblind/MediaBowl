#include <iostream>
#include "../include/User.h"


using namespace std;


User::User(string b , string ms){

search = new SearchClass(b,ms);

}

void User::searchBook(){

    string choice;
	string userAnswer = "";
	cout << "Search for BOOK by: " << endl;
    cout << "\t1. Title" << endl;
    cout << "\t2. Author" << endl;
    cout << "\t3. Genre" << endl;
    getline(cin, choice);
    
    cout << endl;
	
	if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") { //Name
		cout << "\tEnter the title of the book: ";
		getline(cin,userAnswer);
		cout << "\tLooking for information on " << userAnswer << endl;

		search->SearchBookByTitle(userAnswer);


	} else if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") { //Author
		cout << "\tEnter the author of the book: ";
		getline(cin,userAnswer);
		cout << "\tLooking for Books by " << userAnswer << endl;
		
		search->SearchBookByAuthor(userAnswer);

	} else if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") { //Genre
		cout << "\tEnter the genre of the book: ";
		getline(cin,userAnswer);;
		cout << "\tLooking for Genre " << userAnswer;

		search->SearchBookByGenre(userAnswer);

	}
	else {
        cout << "INVALID CHOICE" << endl;
        cout << "Returning to main menu." << endl;
	}



}

void User::searchMovie() {
    string choice;
    string userAnswer = "";
    cout << "Search for MOVIE by: " << endl;
    cout << "\t1. Title" << endl;
    cout << "\t2. Director" << endl;
    cout << "\t3. Genre" << endl;
    cout << "\t4. Actor" << endl;
    getline(cin, choice);
    
    cout << endl;
    
    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") { //Name
        cout << "\tEnter the title of the movie: ";
        getline(cin,userAnswer);
        cout << "\tLooking for information on " << userAnswer << endl;

        search->SearchMovieByTitle(userAnswer);


    } else if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") { //Director
        cout << "\tEnter the director of the movie: ";
        getline(cin,userAnswer);
        cout << "\tLooking for movies by " << userAnswer << endl;
        
        search->SearchMovieByDirector(userAnswer);

    } else if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") { //Genre
        cout << "\tEnter the genre of the movie: ";
        getline(cin,userAnswer);;
        cout << "\tLooking for genre " << userAnswer;

        search->SearchMovieByGenre(userAnswer);

    } else if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //Genre
        cout << "\tEnter the actor of the movie: ";
        getline(cin,userAnswer);;
        cout << "\tLooking for movies by " << userAnswer;

        search->SearchMovieByActor(userAnswer);

    }
    else {
        cout << "INVALID CHOICE" << endl;
        cout << "Returning to main menu." << endl;
    }
}

void User::searchShow() {
    string choice;
    string userAnswer = "";
    cout << "Search for SHOW by: " << endl;
    cout << "\t1. Title" << endl;
    cout << "\t2. Director" << endl;
    cout << "\t3. Genre" << endl;
    cout << "\t4. Actor" << endl;
    getline(cin, choice);
    
    cout << endl;
    
    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") { //Name
        cout << "\tEnter the title of the SHOW: ";
        getline(cin,userAnswer);
        cout << "\tLooking for information on " << userAnswer << endl;

        search->SearchShowByTitle(userAnswer);


    } else if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") { //Author
        cout << "\tEnter the director of the SHOW: ";
        getline(cin,userAnswer);
        cout << "\tLooking for shows by " << userAnswer << endl;
        
        search->SearchShowByDirector(userAnswer);

    } else if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") { //Genre
        cout << "\tEnter the genre of the SHOW: ";
        getline(cin,userAnswer);;
        cout << "\tLooking for genre " << userAnswer;

        search->SearchShowByGenre(userAnswer);

    } else if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //Genre
        cout << "\tEnter the actor of the SHOW: ";
        getline(cin,userAnswer);;
        cout << "\tLooking for shows by " << userAnswer;

        search->SearchShowByActor(userAnswer);

    }
    else {
        cout << "INVALID CHOICE" << endl;
        cout << "Returning to main menu." << endl;
    }

}
