#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/SearchClass.h"


using namespace std;

SearchClass::SearchClass(string b , string ms){
    
    mediaData = new Data(b, ms);
    
}


void SearchClass::SearchBookByTitle(string title){
    
    Book* book = mediaData->books.getBy_title(title);
    
    if(book != nullptr){
        cout << "\t-----------" << endl;
        cout << "\tName: " << book->getTitle() << endl;
        cout << "\tDescription: ";
        cout << book->getDescription() << endl;
        
        cout <<"\tRating: " << book->getRating() << endl;
        cout <<"\tYear: " << book->getRating() << endl;
        cout << "\tGenres: " ;
        book->displayGenres() ;
        cout << endl;
        cout <<  "\tAuthors: " ;
        book->displayAuthors();
        cout << endl;
        cout << "\t-----------" << endl;
    }
    else{
        cout << "\tThe book " << title << " was not found." << endl;
    }
}

void SearchClass::SearchMovieByTitle(string title){
    
    Movie* movie = mediaData->movies.getByTitle(title);
    
    if(movie != nullptr){
        cout << "\t-----------" << endl;
        cout << "\tTitle: " << movie->getTitle() << endl;
        cout << "\tDescription: " << movie->getDescription() << endl;
        cout << "\tRating: " << movie->getRating() << endl;
        cout << "\tYear: " << movie->getYear() << endl;
        cout << "\tGenres: " ;
        movie->displayGenres();
        cout << endl;
        cout << "\tActors: ";
        movie->displayActors();
        cout << endl;
        cout << "\tDirector: " << movie->getDirector() << endl;
        cout << "\tRuntime: " << movie->getRuntime() << endl;
        cout << "\t-----------" << endl;
    }
    else{
        cout << "\tThe movie " << title << " was not found." << endl;
    }
    
    
}

void SearchClass::SearchShowByTitle(string title){
    
    Show* show = mediaData->shows.getByTitle(title);
    if(show != nullptr){
        cout << "\t-----------" << endl;
        cout << "\tName: " << show->getTitle() << endl;
        cout << "\tDescription: " << show->getDescription() << endl;
        
        cout << "\tRating: " << show->getRating() << endl;
        cout << "\tYear: " << show->getYear() << endl;
        cout << "\tGenres: " ;
        show->displayGenres();
        cout << endl;
        cout << "\tActors: ";
        show->displayActors();
        cout << endl;
        cout << "\tDirector: " << show->getDirector() << endl;
        cout << "\t-----------" << endl;
    }
    else{
        cout << "\tThe show " << title << " was not found." << endl;
    }
}


void SearchClass::SearchMovieByGenre(string genre){
    
    
    
    vector<Movie*> moviesWithGenre = mediaData->movies.getByGenre(genre);
    int count;
    if(moviesWithGenre.size() > 5 ){
        
        count = 5;
        
    }else{
        
        count = moviesWithGenre.size();
    }
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    if(count == 5 && moviesWithGenre.size() > 5){
        for (int i = 0; i < count; i++) {
            int idx = std::rand() % moviesWithGenre.size(); // Generate a random index
            this->SearchMovieByTitle(moviesWithGenre.at(idx)->getTitle());
            cout << endl;
            
        }
    }
    else{
        for(int i = 0; i < count; i++){
            this->SearchMovieByTitle(moviesWithGenre.at(i)->getTitle());
            cout << endl;
        }
    }
    
    if(count == 0){
        cout << "\tNo movie of genre "  << genre << " was found." << endl;
    }
    
    cout << endl << endl;
    
}

void SearchClass::SearchBookByGenre(string genre){
    
    vector<Book*> booksWithGenre = mediaData->books.getByGenre(genre);
    
    
    int count;
    if(booksWithGenre.size() > 5 ){
        
        count = 5;
        
    }else{
        
        count = booksWithGenre.size();
    }
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = std::rand() % booksWithGenre.size(); // Generate a random index
        this->SearchBookByTitle(booksWithGenre.at(idx)->getTitle());
        cout << endl;
        
    }
    
    if(count == 0){
        cout << "\tNo book of genre "  << genre << " was found." << endl;
    }
    
    cout << endl << endl;
    
    
    
}

void SearchClass::SearchShowByGenre(string genre){
    vector<Show*> showsWithGenre = mediaData->shows.getByGenre(genre);
    
    int count;
    if(showsWithGenre.size() > 10 ){
        
        count = 10;;
        
    }else{
        
        count = showsWithGenre.size();
    }
    
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = std::rand() % showsWithGenre.size(); // Generate a random index
        this->SearchShowByTitle(showsWithGenre.at(idx)->getTitle());
        cout << endl;
    }
    
    if(count == 0){
        cout << "\tNo show of genre "  << genre << " was found." << endl;
    }
    
    cout << endl << endl;
    
}


void SearchClass::SearchBookByAuthor(string author){
    
    vector<Book*> booksWithAuthor = mediaData->books.getByauthor(author);
    
    int count;
    if(booksWithAuthor.size() > 10 ){
        
        count = 10;;
        
    }else{
        
        count = booksWithAuthor.size();
    }
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % booksWithAuthor.size(); // Generate a random index
        this->SearchBookByTitle(booksWithAuthor.at(idx)->getTitle());
        cout << endl;
        
    }
    
    if(count == 0){
        cout << "\tNo book by author " << author << " was found." << endl;
    }
    
    cout << endl << endl;
    
    
    
}

void SearchClass::SearchMovieByDirector(string director){
    
    
    
    vector<Movie*> moviesWithDirector = mediaData->movies.getByDirector(director);
    
    int count;
    if(moviesWithDirector.size() > 10 ){
        
        count = 10;
        
    }else{
        
        count = moviesWithDirector.size();
    }
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % moviesWithDirector.size(); // Generate a random index
        this->SearchMovieByTitle(moviesWithDirector.at(idx)->getTitle());
        cout << endl;
        
    }
    
    if(count == 0){
        cout << "\tNo movie by director " << director << " was found." << endl;
    }
    
    cout << endl << endl;
    
    
    
}

void SearchClass::SearchShowByDirector(string director){
    
    
    vector<Show*> showsWithDirector = mediaData->shows.getByDirector(director);
    
    
    int count;
    if(showsWithDirector.size() > 10 ){
        
        count = 10;
        
    }else{
        
        count = showsWithDirector.size();
    }
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % showsWithDirector.size(); // Generate a random index
        this->SearchShowByTitle(showsWithDirector.at(idx)->getTitle());
        cout << endl;
        
    }
    
    cout << endl << endl;
    
    
    if(count == 0){
        cout << "\tNo show by director "  << director << " was found." << endl;
    }
    
    
}


void SearchClass::SearchShowByActor(string actor){
    
    vector<Show*> showsWithActor = mediaData->shows.getByActor(actor);
    
    
    int count;
    if(showsWithActor.size() > 10 ){
        
        count = 10;;
        
    }else{
        
        count = showsWithActor.size();
    }
    
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % showsWithActor.size(); // Generate a random index
        this->SearchShowByTitle(showsWithActor.at(idx)->getTitle());
        cout << endl;
        
    }
    
    cout << endl << endl;
    
    if(count == 0){
        cout << "\tNo show by actor "  << actor << " was found." << endl;
    }
    
    
}

void SearchClass::SearchMovieByActor(string actor){
    
    
    vector<Movie*> movieWithActor = mediaData->movies.getByActor(actor);
    
    int count;
    if(movieWithActor.size() > 10 ){
        
        count = 10;
        
    }else{
        
        count = movieWithActor.size();
    }
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % movieWithActor.size(); // Generate a random index
        this->SearchMovieByTitle(movieWithActor.at(idx)->getTitle());
        cout << endl;
        
    }
    
    if(count == 0){
        cout << "\tNo movie by actor "  << actor << " was found." << endl;
    }
    
    cout << endl << endl;
    
    
    
    
}


void SearchClass::SearchBookByYear(int year){
    vector <Book*> bookInYear = mediaData->books.getBy_year(year);
    
    int count;
    if(bookInYear.size() > 10 ){
        
        count = 10;;
        
    }else{
        
        count = bookInYear.size();
    }
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % bookInYear.size(); // Generate a random index
        this->SearchBookByTitle(bookInYear.at(idx)->getTitle());
        cout << endl;
        
    }
    
    if(count == 0){
        cout << "\tNo book from year "  << year << " was found." << endl;
    }
    
    cout << endl << endl;
    
    
    
}

void SearchClass::SearchMovieByYear(int year){
    
    vector <Movie*> movieInYear = mediaData->movies.getByReleaseYear(year);
    
    int count;
    if(movieInYear.size() > 10 ){
        
        count = 10;;
        
    }else{
        
        count = movieInYear.size();
    }
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % movieInYear.size(); // Generate a random index
        this->SearchMovieByTitle(movieInYear.at(idx)->getTitle());
        cout << endl;
        
    }
    
    if(count == 0){
        cout << "\tNo movie from year "  << year << " was found." << endl;
    }
    
    cout << endl << endl;
    
    
    
}



void SearchClass::SearchShowByYear(int year){
    
    vector<Show*> showInYear = mediaData->shows.getByReleaseYear(year);
    
    int count;
    if(showInYear.size() > 10 ){
        
        count = 10;;
        
    }else{
        
        count = showInYear.size();
    }
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    for (int i = 0; i < count; i++) {
        int idx = rand() % showInYear.size(); // Generate a random index
        this->SearchShowByTitle(showInYear.at(idx)->getTitle());
        cout << endl;
        
    }
    
    if(count == 0){
        cout << "\tNo show from year "  << year << " was found." << endl;
    }
    
    cout << endl << endl;
    
    
}

// void SearchClass::getBookRec(string title){

// Book* searchBok = mediaData->books.getBy_title(title);



// }

