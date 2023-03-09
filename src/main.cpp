#include <iostream>
#include "../include/SearchClass.h"

using namespace std;


int main(){

string bookFile = "TestBooks.txt";
string movieShowFile = "WebScrapedMS.txt";

SearchClass searching(bookFile, movieShowFile);

searching.SearchBookByTitle("Crime and Punishment");
searching.SearchMovieByTitle("Magic Mike");
searching.SearchShowByTitle("Gilmore Girls");
searching.SearchBookByGenre("Crime");
searching.SearchMovieByActor("Channing Tatum");

return 0;

}