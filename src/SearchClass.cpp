#include <iostream>
#include "../include/SearchClass.h"

using namespace std;

SearchClass::SearchClass(string b , string ms){

mediaData = new Data(b, ms);

}


void SearchClass::SearchBookByTitle(string title){

Book* book = mediaData->books.getBy_title(title);

cout << "Name: " << book->getTitle() << endl;
cout << "Description: " << endl;
cout << book->getDescription() << endl;

cout <<"Rating: " << book->getRating() << endl;
cout <<"Year: " << book->getRating() << endl;
cout << "Genres: " ;
 book->displayGenres() ;
 cout << endl;
cout <<  "Authors: " ;
 book->displayAuthors();
cout << endl << endl << endl;


}

void SearchClass::SearchMovieByTitle(string title){

Movie* movie = mediaData->movies.getByTitle(title);

cout << "Name: " << movie->getTitle() << endl;
cout <<"Description: " << endl << movie->getDescription() << endl;

cout <<"Rating: " << movie->getRating() << endl;
cout  <<"Year: " << movie->getYear() << endl;
cout << "Genres: " ;
movie->displayGenres();
cout << endl;
cout << "Actors: " << endl;
movie->displayActors();
cout << endl;
cout << "Director: " << movie->getDirector() << endl;
cout << "Runtime: " << movie->getRuntime() << endl;
cout << endl << endl << endl;


}

void SearchClass::SearchShowByTitle(string title){

Show* show = mediaData->shows.getByTitle(title);

cout << "Name: " << show->getTitle() << endl;
cout <<"Description: " << endl << show->getDescription() << endl;

cout <<"Rating: " << show->getRating() << endl;
cout  <<"Year: " << show->getYear() << endl;
cout << "Genres: " ;
show->displayGenres();
cout << endl;
cout << "Actors: " << endl;
show->displayActors();
cout << endl;
cout << "Director: " << show->getDirector() << endl;

cout << endl << endl << endl;

}