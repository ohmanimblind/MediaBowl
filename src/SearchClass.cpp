#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/SearchClass.h"
#include <vector>
#include <algorithm>

using namespace std;

SearchClass::SearchClass(string b , string ms){
    
    mediaData = new Data(b, ms);
    
}

SearchClass::~SearchClass(){
    delete mediaData;
}

void SearchClass::SearchBookByTitle(string title){
    
    Book* book = mediaData->books.getBy_title(title);
    
    if(book != nullptr){
        cout << "\t-----------" << endl;
        cout << "\tName: " << book->getTitle() << endl;
        cout << "\tDescription: ";
        cout << book->getDescription() << endl;
        
        if(book->getRating()){
            cout <<"\tRating: " << book->getRating() << endl;
        }
        if(book->getYear()){
            cout <<"\tYear: " << book->getYear() << endl;
        }
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
        if(movie->getRating()){
            cout << "\tRating: " << movie->getRating() << endl;
        }
        if(movie->getYear()){
            cout << "\tYear: " << movie->getYear() << endl;
        }
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
        if(show->getRating()){
            cout << "\tRating: " << show->getRating() << endl;
        }
        if(show->getYear()){
            cout << "\tYear: " << show->getYear() << endl;
        }
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
    vector<int> newIndex;
    while(newIndex.size() < count){
        int idx = std::rand() % moviesWithGenre.size();
        if ( !(std::find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
            newIndex.push_back(idx);
        }
    }
    for (int i = 0; i < count; i++) {
        this->SearchMovieByTitle(moviesWithGenre.at(newIndex.at(i))->getTitle());
        cout << endl;
        
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
    srand(time(nullptr)); // Seed the random number generator with the current time
    vector<int> newIndex;
    while(newIndex.size() < count){
        int idx = std::rand() % booksWithGenre.size();
        if ( !(std::find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
            newIndex.push_back(idx);
        }
    }
    for (int i = 0; i < count; i++) {
        this->SearchBookByTitle(booksWithGenre.at(newIndex.at(i))->getTitle());
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
    if(showsWithGenre.size() > 5 ){
        
        count = 5;
        
    }else{
        
        count = showsWithGenre.size();
    }
    
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    
    // Print out count random elements
    srand(time(nullptr)); // Seed the random number generator with the current time
    vector<int> newIndex;
    while(newIndex.size() < count){
        int idx = std::rand() % showsWithGenre.size();
        if ( !(std::find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
            newIndex.push_back(idx);
        }
    }
    for (int i = 0; i < count; i++) {
        this->SearchShowByTitle(showsWithGenre.at(newIndex.at(i))->getTitle());
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
    if(booksWithAuthor.size() > 5 ){
        
        count = 5;
        
    }else{
        
        count = booksWithAuthor.size();
    }
    
    
    // Print out count random elements
    srand(time(nullptr)); // Seed the random number generator with the current time
    vector<int> newIndex;
    while(newIndex.size() < count){
        int idx = std::rand() % booksWithAuthor.size();
        if ( !(std::find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
            newIndex.push_back(idx);
        }
    }
    for (int i = 0; i < count; i++) {
        this->SearchBookByTitle(booksWithAuthor.at(newIndex.at(i))->getTitle());
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
    if(moviesWithDirector.size() > 5 ){
        
        count = 5;
        
    }else{
        
        count = moviesWithDirector.size();
    }
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    vector<int> newIndex;
    while(newIndex.size() < count){
        int idx = std::rand() % moviesWithDirector.size();
        if ( !(std::find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
            newIndex.push_back(idx);
        }
    }
    for (int i = 0; i < count; i++) {
        this->SearchMovieByTitle(moviesWithDirector.at(newIndex.at(i))->getTitle());
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
    if(showsWithDirector.size() > 5 ){
        
        count = 5;
        
    }else{
        
        count = showsWithDirector.size();
    }
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    vector<int> newIndex;
    while(newIndex.size() < count){
        int idx = std::rand() % showsWithDirector.size();
        if ( !(std::find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
            newIndex.push_back(idx);
        }
    }
    for (int i = 0; i < count; i++) {
        this->SearchShowByTitle(showsWithDirector.at(newIndex.at(i))->getTitle());
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
    if(showsWithActor.size() > 5 ){
        
        count = 5;
        
    }else{
        
        count = showsWithActor.size();
    }
    
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    vector<int> newIndex;
    while(newIndex.size() < count){
        int idx = std::rand() % showsWithActor.size();
        if ( !(std::find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
            newIndex.push_back(idx);
        }
    }
    for (int i = 0; i < count; i++) {
        this->SearchShowByTitle(showsWithActor.at(newIndex.at(i))->getTitle());
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
    if(movieWithActor.size() > 5 ){
        
        count = 5;
        
    }else{
        
        count = movieWithActor.size();
    }
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    vector<int> newIndex;
    while(newIndex.size() < count){
        int idx = std::rand() % movieWithActor.size();
        if ( !(std::find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
            newIndex.push_back(idx);
        }
    }
    for (int i = 0; i < count; i++) {
        this->SearchMovieByTitle(movieWithActor.at(newIndex.at(i))->getTitle());
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
    if(bookInYear.size() > 5 ){
        
        count = 5;
        
    }else{
        
        count = bookInYear.size();
    }
    
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    vector<int> newIndex;
    while(newIndex.size() < count){
        int idx = std::rand() % bookInYear.size();
        if ( !(std::find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
            newIndex.push_back(idx);
        }
    }
    for (int i = 0; i < count; i++) {
        this->SearchBookByTitle(bookInYear.at(newIndex.at(i))->getTitle());
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
    if(movieInYear.size() > 5 ){
        
        count = 5;
        
    }else{
        
        count = movieInYear.size();
    }
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    vector<int> newIndex;
    while(newIndex.size() < count){
        int idx = std::rand() % movieInYear.size();
        if ( !(std::find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
            newIndex.push_back(idx);
        }
    }
    for (int i = 0; i < count; i++) {
        this->SearchMovieByTitle(movieInYear.at(newIndex.at(i))->getTitle());
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
    if(showInYear.size() > 5 ){
        
        count = 5;
        
    }else{
        
        count = showInYear.size();
    }
    
    srand(time(nullptr)); // Seed the random number generator with the current time
    vector<int> newIndex;
    while(newIndex.size() < count){
        int idx = std::rand() % showInYear.size();
        if ( !(std::find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
            newIndex.push_back(idx);
        }
    }
    for (int i = 0; i < count; i++) {
        this->SearchShowByTitle(showInYear.at(newIndex.at(i))->getTitle());
        cout << endl;
        
    }
    
    if(count == 0){
        cout << "\tNo show from year "  << year << " was found." << endl;
    }
    
    cout << endl << endl;
    
    
}

void SearchClass::getBookRec(string title){
    Book* searchBook = mediaData->books.getBy_title(title);
    if(searchBook){
        vector<string> genres = searchBook->getGenres();
        this->RecommendBookByGenres(genres, searchBook);
    }
    
    else{
        cout << "\tThe book " << title << " was not found." << endl;
    }
}

void SearchClass::getShowRec(string title){
    Show* searchShow = mediaData->shows.getByTitle(title);
    if(searchShow){
        vector<string> genres = searchShow->getGenres();
        this->RecommendShowByGenres(genres, searchShow);
    }
    
    else{
        cout << "\tThe show " << title << " was not found." << endl;
    }
}

void SearchClass::getMovieRec(string title){
    Movie* searchMovie = mediaData->movies.getByTitle(title);
    if(searchMovie){
        vector<string> genres = searchMovie->getGenres();
        this->RecommendMovieByGenres(genres, searchMovie);
    }
    
    else{
        cout << "\tThe movie " << title << " was not found." << endl;
    }
}

void SearchClass::getMediaRec(string title, mediaType media){
    if(media == movie){
        Movie* searchMovie = mediaData->movies.getByTitle(title);
        if(searchMovie){
            vector<string> genres = searchMovie->getGenres();
            cout << "\t----Movie Recommendations----" << endl;
            cout << endl;
            this->RecommendMovieByGenres(genres, searchMovie);
            cout << endl;
            cout << "\t----Book Recommendations----" << endl;
            cout << endl;
            this->RecommendBookByGenres(genres, searchMovie);
            cout << endl;
            cout << "\t----Show Recommendations----" << endl;
            cout << endl;
            this->RecommendShowByGenres(genres, searchMovie);
            cout << endl;
        }
        
        else{
            cout << "\tThe movie " << title << " was not found." << endl;
        }
    }
    else if(media == book){
        Book* searchBook = mediaData->books.getBy_title(title);
        if(searchBook){
            vector<string> genres = searchBook->getGenres();
            cout << "\t----Book Recommendations----" << endl;
            cout << endl;
            this->RecommendBookByGenres(genres, searchBook);
            cout << endl;
            cout << "\t----Movie Recommendations----" << endl;
            cout << endl;
            this->RecommendMovieByGenres(genres, searchBook);
            cout << endl;
            cout << "\t----Show Recommendations----" << endl;
            cout << endl;
            this->RecommendShowByGenres(genres, searchBook);
            cout << endl;
        }
        
        else{
            cout << "\tThe book " << title << " was not found." << endl;
        }
    }
    else{
        Show* searchShow = mediaData->shows.getByTitle(title);
        if(searchShow){
            vector<string> genres = searchShow->getGenres();
            cout << "\t----Show Recommendations----" << endl;
            cout << endl;
            this->RecommendShowByGenres(genres, searchShow);
            cout << endl;
            cout << "\t----Movie Recommendations----" << endl;
            cout << endl;
            this->RecommendMovieByGenres(genres, searchShow);
            cout << endl;
            cout << "\t----Book Recommendations----" << endl;
            cout << endl;
            this->RecommendBookByGenres(genres, searchShow);
            cout << endl;
        }
        
        else{
            cout << "\tThe show " << title << " was not found." << endl;
        }
    }
}

void SearchClass::RecommendShowByGenres(vector<string> genres, Media* media){
    //Getting movies that are similar to the movie based on most genres matched
    vector<Show*> firstPass = mediaData->shows.getByGenre(genres.at(genres.size() - 1));
    
    int index = genres.size() - 1;
    while(firstPass.size() < 1 && index > 0){
        firstPass = mediaData->shows.getByGenre(genres.at(--index));
    }
    if(index == 0 && firstPass.size() == 0){
        cout << "\t\tNo show similar to " << media->getTitle() << " was found.";
        cout << endl;
        return;
    }
    
    vector<Show*> finalVect;
    vector<Show*> prev = firstPass;
    int counter = 0;
    //finds movies that are most similar and adds to a vector;
    for(int i = 0; i < genres.size() - 1; i++){
        vector<Show*> temp = mediaData->shows.getByGenre(genres.at(i));
        vector<Show*> matches;
        for(int j = 0; j < prev.size(); j++){
            for(int k = 0; k < temp.size(); k++){
                if(temp.at(k) == prev.at(j) && temp.at(k) != media){
                    matches.push_back(temp.at(k));
                    break;
                }
            }
        }
        if(matches.size() > 0){
            prev = matches;
        }
        else{
            break;
        }
    }
    if(prev.size() == 0  || (prev.at(0) == media && prev.size() == 1)){
        cout << "\t\tNo show similar to " << media->getTitle() << " was found.";
        cout << endl;
    }
    else{
        srand(time(nullptr));
        vector<int> newIndex;
        while(newIndex.size() < 5 && newIndex.size() < prev.size()){
            int idx = rand() % prev.size();
            if(!(find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
                newIndex.push_back(idx);
            }
        }
        
        for(int i = 0; i < newIndex.size(); i++){
            if(prev.at(newIndex.at(i)) != media){
                this->SearchShowByTitle(prev.at(newIndex.at(i))->getTitle());
                cout << endl;
            }
        }
    }
    
}

void SearchClass::RecommendBookByGenres(vector<string> genres, Media* media){
    //Getting movies that are similar to the movie based on most genres matched
    vector<Book*> firstPass = mediaData->books.getByGenre(genres.at(genres.size() - 1));
    vector<Book*> finalVect;
    vector<Book*> prev = firstPass;
    int counter = 0;
    
    
    //finds movies that are most similar and adds to a vector;
    for(int i = 0; i < genres.size() - 1; i++){
        vector<Book*> temp = mediaData->books.getByGenre(genres.at(i));
        vector<Book*> matches;
        for(int j = 0; j < prev.size(); j++){
            for(int k = 0; k < temp.size(); k++){
                if(temp.at(k) == prev.at(j) && temp.at(k) != media){
                    matches.push_back(temp.at(k));
                    break;
                }
            }
        }
        if(matches.size() > 0){
            prev = matches;
        }
        else{
            break;
        }
    }
    if(prev.size() == 0 || (prev.at(0) == media && prev.size() == 1)){
        cout << "\t\tNo book similar to " << media->getTitle() << " was found.";
        cout << endl;
    }
    else{
        srand(time(nullptr));
        vector<int> newIndex;
        while(newIndex.size() < 5 && newIndex.size() < prev.size()){
            int idx = rand() % prev.size();
            if(!(find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
                newIndex.push_back(idx);
            }
        }
        
        for(int i = 0; i < newIndex.size(); i++){
            if(prev.at(newIndex.at(i)) != media){
                this->SearchBookByTitle(prev.at(newIndex.at(i))->getTitle());
                cout << endl;
            }
        }
    }
    
}



void SearchClass::RecommendMovieByGenres(vector<string> genres, Media* media){
    //Getting movies that are similar to the movie based on most genres matched
    vector<Movie*> firstPass = mediaData->movies.getByGenre(genres.at(genres.size() - 1));
    int index = genres.size() - 1;
    while(firstPass.size() < 1 && index > 0){
        firstPass = mediaData->movies.getByGenre(genres.at(--index));
    }
    if(index == 0 && firstPass.size() == 0){
        cout << "\t\tNo movie similar to " << media->getTitle() << " was found.";
        cout << endl;
        return;
    }
    vector<Movie*> finalVect;
    vector<Movie*> prev = firstPass;
    int counter = 0;
    
    
    //finds movies that are most similar and adds to a vector;
    for(int i = 0; i < index; i++){
        vector<Movie*> temp = mediaData->movies.getByGenre(genres.at(i));
        vector<Movie*> matches;
        for(int j = 0; j < prev.size(); j++){
            for(int k = 0; k < temp.size(); k++){
                if(temp.at(k) == prev.at(j) && temp.at(k) != media){
                    matches.push_back(temp.at(k));
                    break;
                }
            }
        }
        if(matches.size() > 0){
            prev = matches;
        }
        else{
            break;
        }
    }
    if(prev.size() == 0  || (prev.at(0) == media && prev.size() == 1)){
        cout << "\t\tNo movie similar to " << media->getTitle() << " was found.";
        cout << endl;
    }
    else{
        srand(time(nullptr));
        vector<int> newIndex;
        while(newIndex.size() < 5 && newIndex.size() < prev.size()){
            int idx = rand() % prev.size();
            if(!(find(newIndex.begin(), newIndex.end(), idx) != newIndex.end())){
                newIndex.push_back(idx);
            }
        }
        
        for(int i = 0; i < newIndex.size(); i++){
            if(prev.at(newIndex.at(i)) != media){
                this->SearchMovieByTitle(prev.at(newIndex.at(i))->getTitle());
                cout << endl;
            }
        }
    }
    
}
