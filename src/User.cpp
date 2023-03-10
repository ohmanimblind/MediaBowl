#include <iostream>
#include "../include/User.h"


using namespace std;


User::User(string b , string ms){

search = new SearchClass(b,ms);

}

void User::searchBook(){

int option;
	string userAnswer = "";
	cout << "How would you like to search for a book ?" << endl;
	cout << "Enter 1 for Title , 2 for Author, 3 for Genre" << endl;
	cin >> option;
	
	if (option == 1) { //Name
		cout << "What is the title of the Book you're looking for? " << endl;
		getline(cin,userAnswer);
		cout << "Looking for information on " << userAnswer << endl;

		search->SearchBookByTitle(userAnswer);


	}if (option == 2) { //Author
		cout << "Which Author are you interested in? " << endl; 
		getline(cin,userAnswer);;
		cout << "Looking for Books by " << userAnswer << endl;
		
		search->SearchBookByAuthor(userAnswer);

	}if (option == 3) { //Genre
		cout << "What Genre are you looking for ?" << endl;
		getline(cin,userAnswer);;
		cout << "Looking for Genre " << userAnswer; 

		search->SearchBookByGenre(userAnswer);

	}
	else {
		cout << "Invalid Menu Choice. Returning to main menu" << endl;
	}



}

void User::searchMovie() {
	int option;
	string userAnswer = "";
	cout << "How would you like to search for a Movie ?" << endl;
	cout << "Enter 1 for Title , 2 for Director, 3 for Genre, 4 for Actors" << endl;
	cin >> option;

	if (option == 1) { //Name
		cout << "What is the title of the Movie you're looking for? " << endl;
		getline(cin,userAnswer);;
		cout << "Looking for information on " << userAnswer << endl;

		search->SearchMovieByTitle(userAnswer);


	}if (option == 2) { //Author
		cout << "Which Director are you interested in? " << endl;
		getline(cin,userAnswer);;
		cout << "Looking for Movies by " << userAnswer << endl;

		search->SearchMovieByDirector(userAnswer);

	}if (option == 3) { //Genre
		cout << "What Genre are you looking for ?" << endl;
		getline(cin,userAnswer);;
		cout << "Looking for Genre " << userAnswer;

		search->SearchMovieByGenre(userAnswer);

	}if (option == 4) {
		cout << "What Actor are you interested in ?" << endl;
        cin.ignore();
		getline(cin,userAnswer); 
		cout << "Looking for Movies with " << userAnswer << endl;

		search->SearchMovieByActor(userAnswer);
	}
	else {
		cout << "Invalid Menu Choice. Returning to main menu" << endl;
	}




}

void User::searchShow() {
	int option;
	string userAnswer = "";
	cout << "How would you like to search for a Show ?" << endl;
	cout << "Enter 1 for Title , 2 for Director, 3 for Genre, 4 for Actors" << endl;
	cin >> option;

	if (option == 1) { //Name
		cout << "What is the title of the Show you're looking for? " << endl;
		getline(cin,userAnswer);;
		cout << "Looking for information on " << userAnswer << endl;

		search->SearchMovieByTitle(userAnswer);


	}if (option == 2) { //Author
		cout << "Which Director are you interested in? " << endl;
		getline(cin,userAnswer);;
		cout << "Looking for Shows by " << userAnswer << endl;

        search->SearchShowByDirector(userAnswer);

	}if (option == 3) { //Genre
		cout << "What Genre are you looking for ?" << endl;
		getline(cin,userAnswer);;
		cout << "Looking for Genre " << userAnswer;

		search->SearchShowByGenre(userAnswer);

	}if (option == 4) {
		cout << "What Actor are you interested in ?" << endl;
		getline(cin,userAnswer);;
		cout << "Looking for Shows with " << userAnswer << endl;

		search->SearchShowByActor(userAnswer);
	}
	else {
		cout << "Invalid Menu Choice. Returning to main menu" << endl;
	}


}


void User::searchGenre() {
	string userAnswer;
	cout << "Enter Genre you are interested in: " << endl;
	getline(cin,userAnswer);;
	cout << "Here are Books with the Genre of the " << userAnswer << "Genre" << endl;
	search->SearchBookByGenre(userAnswer);
	cout << "Here are Movies with the Genre of the " << userAnswer << "Genre" << endl;
	search->SearchMovieByGenre(userAnswer);
	cout << "Here are Shows with the Genre of the " << userAnswer << "Genre" << endl;
	search->SearchShowByGenre(userAnswer);

}
