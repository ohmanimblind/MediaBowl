#include <iostream>
#include "../include/User.h"


using namespace std;


User::User(string b , string ms){

search = new SearchClass(b,ms);

}

User::~User(){
    delete search;
}

void User::searchBook(){

    string choice;
	string userAnswer = "";
	cout << "\tSearch for BOOK by: " << endl;
    cout << "\t\t1. Title" << endl;
    cout << "\t\t2. Author" << endl;
    cout << "\t\t3. Genre" << endl;
    cout << endl;
    cout << "\tEnter your choice: ";
    getline(cin, choice);
    
    cout << endl;
	
	if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") { //Name
		cout << "\t\tEnter the title of the book: ";
		getline(cin,userAnswer);
		//cout << "\tLooking for information on " << userAnswer << endl;
        cout << endl;
		search->SearchBookByTitle(userAnswer);


	} else if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") { //Author
		cout << "\t\tEnter the author of the book: ";
		getline(cin,userAnswer);
		//cout << "\tLooking for Books by " << userAnswer << endl;
        cout << endl;
		search->SearchBookByAuthor(userAnswer);

	} else if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") { //Genre
		cout << "\t\tEnter the genre of the book: ";
		getline(cin,userAnswer);;
		//cout << "\tLooking for Genre " << userAnswer;
        cout << endl;
		search->SearchBookByGenre(userAnswer);

	}
	else {
        cout << "\tINVALID CHOICE" << endl;
        cout << "\tReturning to main menu." << endl;
	}



}

void User::searchMovie() {
    string choice;
    string userAnswer = "";
    cout << "\tSearch for MOVIE by: " << endl;
    cout << "\t\t1. Title" << endl;
    cout << "\t\t2. Director" << endl;
    cout << "\t\t3. Genre" << endl;
    cout << "\t\t4. Actor" << endl;
    cout << endl;
    cout << "\tEnter your choice: ";
    getline(cin, choice);
    
    cout << endl;
    
    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") { //Name
        cout << "\t\tEnter the title of the movie: ";
        getline(cin,userAnswer);
        //cout << "\tLooking for information on " << userAnswer << endl;
        cout << endl;
        search->SearchMovieByTitle(userAnswer);


    } else if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") { //Director
        cout << "\t\tEnter the director of the movie: ";
        getline(cin,userAnswer);
        //cout << "\tLooking for movies by " << userAnswer << endl;
        cout << endl;
        search->SearchMovieByDirector(userAnswer);

    } else if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") { //Genre
        cout << "\t\tEnter the genre of the movie: ";
        getline(cin,userAnswer);;
        //cout << "\tLooking for genre " << userAnswer;
        cout << endl;
        search->SearchMovieByGenre(userAnswer);

    } else if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //Genre
        cout << "\t\tEnter the actor of the movie: ";
        getline(cin,userAnswer);;
        //cout << "\tLooking for movies by " << userAnswer;
        cout << endl;
        search->SearchMovieByActor(userAnswer);

    }
    else {
        cout << "\tINVALID CHOICE" << endl;
        cout << "\tReturning to main menu." << endl;
    }
}

void User::searchShow() {
    string choice;
    string userAnswer = "";
    cout << "\tSearch for SHOW by: " << endl;
    cout << "\t\t1. Title" << endl;
    cout << "\t\t2. Director" << endl;
    cout << "\t\t3. Genre" << endl;
    cout << "\t\t4. Actor" << endl;
    cout << endl;
    cout << "\tEnter your choice: ";
    getline(cin, choice);
    
    cout << endl;
    
    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") { //Name
        cout << "\t\tEnter the title of the SHOW: ";
        getline(cin,userAnswer);
        //cout << "\tLooking for information on " << userAnswer << endl;
        cout << endl;
        search->SearchShowByTitle(userAnswer);


    } else if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") { //Author
        cout << "\t\tEnter the director of the SHOW: ";
        getline(cin,userAnswer);
        //cout << "\tLooking for shows by " << userAnswer << endl;
        cout << endl;
        
        search->SearchShowByDirector(userAnswer);

    } else if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") { //Genre
        cout << "\t\tEnter the genre of the SHOW: ";
        getline(cin,userAnswer);;
        //cout << "\tLooking for genre " << userAnswer;

        search->SearchShowByGenre(userAnswer);

    } else if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //Genre
        cout << "\t\tEnter the actor of the SHOW: ";
        getline(cin,userAnswer);;
        //cout << "\tLooking for shows by " << userAnswer;
        cout << endl;
        search->SearchShowByActor(userAnswer);

    }
    else {
        cout << "\tINVALID CHOICE" << endl;
        cout << "\tReturning to main menu." << endl;
    }

}

void User::getMovieRec(){
    cout << "\t\tEnter the title of the movie: ";
    string in;
    getline(cin, in);
    cout << endl;
    search->getMovieRec(in);
}

void User::getBookRec(){
    cout << "\t\tEnter the title of the book: ";
    string in;
    getline(cin, in);
    cout << endl;
    search->getBookRec(in);
}

void User::getShowRec(){
    cout << "\t\tEnter the title of the show: ";
    string in;
    getline(cin, in);
    cout << endl;
    search->getShowRec(in);
}

void User::getMediaRec(){
    cout << "\tGet media recommendation by: " << endl;
    cout << "\t\t1. Movie" << endl;
    cout << "\t\t2. Book" << endl;
    cout << "\t\t3. Show" << endl;
    cout << endl;
    cout << "\tEnter your choice: ";
    string choice;
    getline(cin, choice);
    cout << endl;
    if(choice == "1" || choice == "1." || choice == "movie" || choice == "Movie"){
        cout << "\t\t\tEnter the title of the movie: ";
        string in;
        getline(cin, in);
        cout << endl;
        search->getMediaRec(in, movie);
    }
    else if(choice == "2" || choice == "2." || choice == "book" || choice == "Book"){
        cout << "\t\t\tEnter the title of the book: ";
        string in;
        getline(cin, in);
        cout << endl;
        search->getMediaRec(in, book);
    }
    else if(choice == "3" || choice == "3." || choice == "show" || choice == "Show"){
        cout << "\t\t\tEnter the title of the show: ";
        string in;
        getline(cin, in);
        cout << endl;
        search->getMediaRec(in, show);
    }
    else{
        cout << "\t\tINVALID CHOICE" << endl;
        cout << "\t\tReturning to main menu." << endl;
    }
}
