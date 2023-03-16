#include "gtest/gtest.h"
#include "../include/Book.h"
#include "../include/Movie.h"
#include "../include/Show.h"
#include "../include/StackMaker.h"
#include "../include/SearchClass.h"
#include "../include/Data.h"
#include "../include/User.h"
#include <iostream>
#include <vector>
#include <cassert>


TEST(MovieConstructor, testMovieName){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getTitle(),"The Batman");

}

TEST(MovieConstructor, testMovieRating){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getRating(),7.8);

}

TEST(MovieConstructor, testMovieDirector){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getDirector(),"Mat Reeves");

}

TEST(MovieConstructor, testMovieYear){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getYear(),2022);

}

TEST(MovieConstructor, testMovieGenre){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getGenres().at(0),"Thriller");

}

TEST(MovieConstructor, testMovieRuntime){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getRuntime(),"176");

}

TEST(MovieConstructor, testMovieActor){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

EXPECT_EQ(testMovie->getActors().at(0),"Robert Pattinson");

}

TEST(BookConstructor, testBookTitle){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getTitle(),"Crime and Punishment");

}

TEST(BookConstructor, testBookDescription){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getDescription(),"Untrustworthy Narrator");

}

TEST(BookConstructor, testBookRating){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getRating(),9.5);

}

TEST(BookConstructor, testBookYear){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getYear(),1866);

}

TEST(BookConstructor, testBookGenre){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getGenres().at(0),"Crime");

}

TEST(BookConstructor, testBookAuthor){
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

EXPECT_EQ(testBook->getAuthors().at(0),"Fyodor Dostoyevsky");

}

TEST(ShowConstructor, testShowTitle){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getTitle(),"Hannibal");

}

TEST(ShowConstructor, testShowDescription){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getDescription(),"Serial Killer enjoys meal");

}

TEST(ShowConstructor, testShowRating){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getRating(),8.5);

}
TEST(ShowConstructor, testShowYear){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getYear(),2013);

}

TEST(ShowConstructor, testShowGenre){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getGenres().at(0),"Detective");

}

TEST(ShowConstructor, testShowActors){
vector<string>genres;
genres.push_back("Detective");
vector<string> actors;
actors.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,"Adam Kane",actors);

EXPECT_EQ(testShow->getActors().at(0),"Mads Mikkelsen");

}



TEST(BookFileStream, BookTitleFromFile){
    
StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Book*> testBookStack = testStack->getBookStack();

EXPECT_EQ(testBookStack.top()->getTitle(), "Crime and Punishment");
}

TEST(BookFileStream, BookAuthorFromFile){
    
StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Book*> testBookStack = testStack->getBookStack();

EXPECT_EQ(testBookStack.top()->getAuthors().at(0), "Fyodor Dostoyevsky");
}

TEST(BookFileStream, BookRatingFromFile){
    
StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Book*> testBookStack = testStack->getBookStack();

EXPECT_EQ(testBookStack.top()->getRating(), 9.5);
}

TEST(BookFileStream, BookYearFromFile){
    
StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Book*> testBookStack = testStack->getBookStack();
 
EXPECT_EQ(testBookStack.top()->getYear(), 1866);
}

TEST(BookFileStream, testingSecondBook){

StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Book*> testBookStack = testStack->getBookStack();

testBookStack.pop();

EXPECT_EQ(testBookStack.top()->getTitle(), "1984");
}

TEST(MovieandShowFileStream , testingMovieReading){

StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getTitle(),"The Social Network");

}
TEST(MovieandShowFileStream, testingShowReading){

StackMaker* testStack = new StackMaker("TestBooks.txt","TestMS.txt");

stack<Show*> testShowStack = testStack->getShowStack();

EXPECT_EQ(testShowStack.top()->getTitle(),"Breaking Bad");
}

TEST(TestingFromWebScraper, testingMovie){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getTitle(), "The Unbearable Weight of Massive Talent");

}

TEST(TestingFromWebScraper, testingMovieDescription){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getDescription(), "In this action-packed comedy, Nicolas Cage plays Nick Cage, channeling his iconic characters as he's caught between a superfan (Pedro Pascal) and a CIA agent (Tiffany Haddish).");

}
TEST(TestingFromWebScraper, testingMovieRating){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getRating(),7.0);

}

TEST(TestingFromWebScraper, testingMovieYear){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getYear(), 2022);
}

TEST(TestingFromWebScraper, testingMovieGenre_1){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();


    EXPECT_EQ(testMovieStack.top()->getGenres().at(0), "Action");
}

TEST(TestingFromWebScraper, testingMovieGenre_2){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();


    EXPECT_EQ(testMovieStack.top()->getGenres().at(1), "Comedy");
}
TEST(TestingFromWebScraper, testingMovieGenre_3){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();


    EXPECT_EQ(testMovieStack.top()->getGenres().at(2), "Crime");
}

TEST(TestingFromWebScraper, testingMovieDirector){

StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getDirector(),"Tom Gormican");

}
TEST(TestingFromWebScraper, testingMovieDuration){
StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getRuntime(),"1h 47m");


}


TEST(TestingFromWebScraper, testingMovieActor_2){
    StackMaker* testStack = new StackMaker("TestBooks.txt","sample.txt");


stack<Movie*> testMovieStack = testStack->getMovieStack();

EXPECT_EQ(testMovieStack.top()->getActors().at(1), "Pedro Pascal");
}
    

TEST(TestingBookHashTableSearch, testingBook_1){
   
vector<string> genres;
genres.push_back("Crime");
vector <string> author;
author.push_back("Fyodor Dostoyevsky");
Book* testBook = new Book("Crime and Punishment","Untrustworthy Narrator",9.5,1866,genres,author);

BookTable table;
table.insert(testBook);

Book* searchBook = table.getBy_title("Crime and Punishment");

EXPECT_EQ(searchBook->getRating(),9.5);
}

TEST(TestingMovieHashTableSearch, testingMovie_1){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves","176",actor);

MovieTable  table;

table.insertMovie(testMovie);

Movie* searchMovie = table.getByTitle("The Batman");

EXPECT_EQ(searchMovie->getRating(),7.8);

}

TEST(TestingShowHashTableSearch, testingShow_1){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Show* testShow = new Show("The Batman", "Batman",7.8,2022,genres,"Mat Reeves",actor);

ShowTable  table;

table.insertShow(testShow);

Show* searchShow = table.getByTitle("The Batman");

EXPECT_EQ(searchShow->getRating(),7.8);

}


TEST(MediaConstructor_Testing, ConstructorTest) {
    string title = "Star Wars";
    string description = "A long time ago in a galaxy far, far away...";
    double rating = 8.6;
    int year = 1977;
    vector<string> genres = { "Action", "Adventure"};
    
    Media media_temp(title, description, rating, year, genres);
    
    ASSERT_EQ(media_temp.getTitle(), title);
    ASSERT_EQ(media_temp.getDescription(), description);
    ASSERT_EQ(media_temp.getRating(), rating);
    ASSERT_EQ(media_temp.getYear(), year);
    ASSERT_EQ(media_temp.getGenres(), genres);
}

TEST(MediaConstructor_Testing, ConstructorTest_2) {
    string title = "Batman";
    string description = "I have no clue what the des is...";
    double rating = 8.6;
    int year = 2015;
    vector<string> genres = { "Action", "Adventure" };
    
    Media media_temp(title, description, rating, year, genres);
    
    ASSERT_EQ(media_temp.getTitle(), title);
    ASSERT_EQ(media_temp.getDescription(), description);
    ASSERT_EQ(media_temp.getRating(), rating);
    ASSERT_EQ(media_temp.getYear(), year);
    ASSERT_EQ(media_temp.getGenres(), genres);
}

TEST(MediaConstructor_Testing, ConstructorTest_3) {
    string title = "Iron 2";
    string description = "A dude with a iron suit...";
    double rating = 8.6;
    int year = 2015;
    vector<string> genres = { "Action", "Adventure", "Fantasy" };
    
    Media m(title, description, rating, year, genres);
    
    EXPECT_EQ(m.getTitle(), title);
    EXPECT_EQ(m.getDescription(), description);
    EXPECT_EQ(m.getRating(), rating);
    EXPECT_EQ(m.getYear(), year);
    EXPECT_EQ(m.getGenres(), genres);
}


TEST(MediaConstructor_Testing, ConstructorTitleTest){
    string title = "Fortnite kid breaks leg";
    string description = "He fell doing the Orange Justice";
    double rating = 3.0;
    int year = 2022;
    vector <string> genres = {"Comedy" , "Horror", "Action"};

    Media media_temp(title, description, rating, year, genres);

    ASSERT_EQ(media_temp.getTitle(), title);
}

TEST(MediaConstructor_Testing, ConstructorDescriptionTest){
    string title = "Fortnite kid breaks leg";
    string description = "He fell doing the Orange Justice";
    double rating = 3.0;
    int year = 2022;
    vector <string> genres = {"Comedy" , "Horror", "Action"};

    Media media_temp(title, description, rating, year, genres);

    ASSERT_EQ(media_temp.getDescription(), description);
}


TEST(MediaConstructor_Testing, ConstructorRatingTest){
    string title = "Fortnite kid breaks leg";
    string description = "He fell doing the Orange Justice";
    double rating = 3.0;
    int year = 2022;
    vector <string> genres = {"Comedy" , "Horror", "Action"};

    Media media_temp(title, description, rating, year, genres);

    ASSERT_EQ(media_temp.getRating(), rating);
}


TEST(MediaConstructor_Testing, ConstructorYearTest){
    string title = "Fortnite kid breaks leg";
    string description = "He fell doing the Orange Justice";
    double rating = 3.0;
    int year = 2022;
    vector <string> genres = {"Comedy" , "Horror", "Action"};

    Media media_temp(title, description, rating, year, genres);

    ASSERT_EQ(media_temp.getYear(), year);
}

TEST(MediaConstructor_Testing, ConstructorGenresTest) {
    string title = "The Dark Knight";
    string description = "Batman battles the Joker in Gotham City.";
    double rating = 9.0;
    int year = 2008;
    vector<string> genres = { "Action", "Crime", "Drama" };

    Media media_temp(title, description, rating, year, genres);

    // Check that the genres vector was copied correctly
    EXPECT_EQ(media_temp.getGenres().size(), genres.size());

    for (int i = 0; i < genres.size(); i++) {
        ASSERT_EQ(media_temp.getGenres()[i], genres[i]);
    }
}


TEST(BookTest, ConstructorTest_1) {
    string title = "The Lord of the Rings";
    string description = "In a world of magic and monsters, a hobbit must journey to destroy an evil ring...";
    double rating = 9.3;
    int year = 2001;
    vector<string> genres = { "Fantasy", "Adventure" };
    vector<string> authors = { "J.R.R. Tolkien" };

    Book book_temp(title, description, rating, year, genres, authors);

    EXPECT_EQ(book_temp.getTitle(), title);
    EXPECT_EQ(book_temp.getDescription(), description);
    EXPECT_EQ(book_temp.getRating(), rating);
    EXPECT_EQ(book_temp.getYear(), year);
    EXPECT_EQ(book_temp.getGenres(), genres);
    EXPECT_EQ(book_temp.getAuthors(), authors);
}

TEST(BookTest, ConstructorTest_2) {
    string title = "To Kill a Mockingbird";
    string description = "A classic novel set in the Deep South about racial injustice and the loss of innocence.";
    double rating = 8.3;
    int year = 1960;
    vector<string> genres = { "Fiction", "Historical" };
    vector<string> authors = { "Harper Lee" };

    Book book_temp(title, description, rating, year, genres, authors);

    EXPECT_EQ(book_temp.getTitle(), title);
    EXPECT_EQ(book_temp.getDescription(), description);
    EXPECT_EQ(book_temp.getRating(), rating);
    EXPECT_EQ(book_temp.getYear(), year);
    EXPECT_EQ(book_temp.getGenres(), genres);
    EXPECT_EQ(book_temp.getAuthors(), authors);
}

TEST(BookTest, ConstructorTest_3) {
    string title = "The Book of my life";
    string description = "A book of Luis' life";
    double rating = 10.0;
    int year = 2003;
    vector<string> genres = { "Comedy", "Non-Fiction" };
    vector<string> authors = { "Luis Magallanes" };

    Book book_temp(title, description, rating, year, genres, authors);

    EXPECT_EQ(book_temp.getTitle(), title);
    EXPECT_EQ(book_temp.getDescription(), description);
    EXPECT_EQ(book_temp.getRating(), rating);
    EXPECT_EQ(book_temp.getYear(), year);
    EXPECT_EQ(book_temp.getGenres(), genres);
    EXPECT_EQ(book_temp.getAuthors(), authors);
}

TEST(BookTest, ConstructorAuthorTest) {
    string title = "The Book of my life";
    string description = "A book of Luis' life";
    double rating = 10.0;
    int year = 2003;
    vector<string> genres = { "Comedy", "Non-Fiction" };
    vector<string> authors = { "jaKAL"};

    Book book_temp(title, description, rating, year, genres, authors);

    ASSERT_EQ(book_temp.getAuthors(), authors);
}


TEST(BookTest, ConstructorAuthorTest_2) {
    string title = "The Book of my life";
    string description = "A book of Luis' life";
    double rating = 10.0;
    int year = 2003;
    vector<string> genres = { "Comedy", "Non-Fiction" };
    vector<string> authors = { "MillieBobbyBrown"};

    Book book_temp(title, description, rating, year, genres, authors);

    ASSERT_EQ(book_temp.getAuthors(), authors);
}


TEST(BookTest, ConstructorAuthorTest_3) {
    string title = "The Book of my life";
    string description = "A book of Luis' life";
    double rating = 10.0;
    int year = 2003;
    vector<string> genres = { "Comedy", "Non-Fiction" };
    vector<string> authors = { "Jack Nickelson"};

    Book book_temp(title, description, rating, year, genres, authors);

    ASSERT_EQ(book_temp.getAuthors(), authors);
}





TEST(ShowConstructor, ConstructorTest_1){
    string title = "The Flash";
    string description = "Guy who runs super fast for no reason";
    double rating = 5.0;
    int year = 2013;
    vector<string> genres = { "Fantasy", "Adventure", "Action", "Horror" };
    string director = "Luis Magallanes";
    vector <string> actors = {"Grant Gustin", "Candice Patton", "Carlos V."};

    Show show_temp(title, description, rating, year, genres, director, actors);

    EXPECT_EQ(show_temp.getTitle(), title);
    EXPECT_EQ(show_temp.getDescription(), description);
    EXPECT_EQ(show_temp.getRating(), rating);
    EXPECT_EQ(show_temp.getYear(), year);
    EXPECT_EQ(show_temp.getGenres(), genres);
    EXPECT_EQ(show_temp.getDirector(), director);
    EXPECT_EQ(show_temp.getActors(), actors);
}

TEST(ShowConstructor, ConstructorTest_2){
    string title = "You";
    string description = "Guy who's beyond crazy";
    double rating = 10.0;
    int year = 2018;
    vector<string> genres = {"Thriller", "Action", "Horror" };
    string director = "John Scott";
    vector <string> actors = {"Penn Badgley", "Eleanor Crain Vance"};

    Show show_temp(title, description, rating, year, genres, director, actors);

    EXPECT_EQ(show_temp.getTitle(), title);
    EXPECT_EQ(show_temp.getDescription(), description);
    EXPECT_EQ(show_temp.getRating(), rating);
    EXPECT_EQ(show_temp.getYear(), year);
    EXPECT_EQ(show_temp.getGenres(), genres);
    EXPECT_EQ(show_temp.getDirector(), director);
    EXPECT_EQ(show_temp.getActors(), actors);
}

TEST(ShowConstructor, ConstructorTest_3){
    string title = "Boy who cried wolf";
    string description = "Some dude in the middle of nowhere crying for help";
    double rating = 1.0;
    int year = 2010;
    vector<string> genres = {"Thriller", "Si-Fi", "Comedy" };
    string director = "Rian Johnson";
    vector <string> actors = {"Brat Pit", "Leonardo Dicaprio"};

    Show show_temp(title, description, rating, year, genres, director, actors);

    EXPECT_EQ(show_temp.getTitle(), title);
    EXPECT_EQ(show_temp.getDescription(), description);
    EXPECT_EQ(show_temp.getRating(), rating);
    EXPECT_EQ(show_temp.getYear(), year);
    EXPECT_EQ(show_temp.getGenres(), genres);
    EXPECT_EQ(show_temp.getDirector(), director);
    EXPECT_EQ(show_temp.getActors(), actors);
}


TEST(ShowConstructor, ConstructorDirectorTest_1){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Brat Pit"};
    string director = "Luis Magallanes";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getDirector(), director);
}


TEST(ShowConstructor, ConstructorDirectorTest_2){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Brat Pit"};
    string director = "Anthony";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getDirector(), director);
}


TEST(ShowConstructor, ConstructorDirectorTest_3){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Brat Pit"};
    string director = "Jad Brad";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getDirector(), director);
}

TEST(ShowConstructor, ConstructorActorsTest_1){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Brat Pit", "JAKAL"};
    string director = "Jad Brad";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getActors()[0], "Brat Pit");
    ASSERT_EQ(show_temp.getActors()[1], "JAKAL");
}


TEST(ShowConstructor, ConstructorActorsTest_2){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Kenny Smith"};
    string director = "Jad Brad";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getActors()[0], "Kenny Smith");
}


TEST(ShowConstructor, ConstructorActorsTest_3){
    vector <string> genres = {"Horror"};
    vector <string> actors = {"Shaq Brite"};
    string director = "Jad Brad";

    Show show_temp("You", "A guy who kills", 5.5, 2015, genres, director, actors);

    ASSERT_EQ(show_temp.getActors()[0], "Shaq Brite");
}



// TEST(TestingBookHashTableSearch, testingBook_1){
//     string title = "The Book of my life";
//     string description = "A book of Luis' life";
//     double rating = 10.0;
//     int year = 2003;
//     vector<string> genres = { "Comedy", "Non-Fiction" };
//     vector<string> authors = { "Luis Magallanes" };

//     Book* book_obj = new Book(title,description, rating, year ,genres,authors);

//     BookTable table_temp;
//     table_temp.insert(book_obj);

//     Book* searchBook = table_temp.getBy_title(title);

//     EXPECT_EQ(searchBook->getRating(),rating);
// }

// TEST(TestingMovieHashTableSearch, testingMovie_1){
//     vector<string> genres = {"Thiller", "Horror"};
//     vector<string> actor = {"Robert downy jr."};
//     Movie* testMovie = new Movie("Eye man", "dude with an eye",7.0,2022,genres,"Jack Danana","temp",actor);

//     MovieTable  temp;
//     temp.insertMovie(testMovie);

//     Movie* searchMovie = temp.getByTitle("Eye man");
//     EXPECT_EQ(searchMovie->getRating(),7.0);

// }

// TEST(TestingShowHashTableSearch, testingShow_1){
//     vector<string> genres = {"Thiller", "Horror"};
//     vector<string> actor = {"Robert downy jr."};
//     actor.push_back("Robert Pattinson");
//     Show* testShow = new Show("Eye man", "dude with an eye",6.0,2022,genres,"Jack Danana",actor);

//     ShowTable temp;
//     temp.insertShow(testShow);

//     Show* searchShow = temp.getByTitle("Eye man");
//     EXPECT_EQ(searchShow->getRating(),6.0);

// }

TEST(TestingUserFile, SearchBookByTitle_1){
    

    string choice = "1";
    string userAnswer = "1984";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    // Book* testingBook = new Book( "1984", "Big Brother is always watching", 8.4, 1949, {"Dystopian"}, {"George Orwell"});

    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchBookByTitle_2){
    

    string choice = "1.";
    string userAnswer = "1984";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    // Book* testingBook = new Book( "1984", "Big Brother is always watching", 8.4, 1949, {"Dystopian"}, {"George Orwell"});

    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchBookByTitle_3){
    

    string choice = "Title";
    string userAnswer = "1984";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    // Book* testingBook = new Book( "1984", "Big Brother is always watching", 8.4, 1949, {"Dystopian"}, {"George Orwell"});

    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchBookByTitle_4){
    

    string choice = "title";
    string userAnswer = "1984";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    // Book* testingBook = new Book( "1984", "Big Brother is always watching", 8.4, 1949, {"Dystopian"}, {"George Orwell"});

    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchBookByTitle_5){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime,Thriller#Fyodor Dostoyevsky
    string choice = "1";
    string userAnswer = "Crime and Punishment";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByTitle_6){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime,Thriller#Fyodor Dostoyevsky
    string choice = "1.";
    string userAnswer = "Crime and Punishment";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByTitle_7){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime,Thriller#Fyodor Dostoyevsky
    string choice = "Title";
    string userAnswer = "Crime and Punishment";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByTitle_8){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime,Thriller#Fyodor Dostoyevsky
    string choice = "title";
    string userAnswer = "Crime and Punishment";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByAuthor_1){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "2";
    string userAnswer = "Fyodor Dostoyevsky";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByAuthor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByAuthor_2){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "2.";
    string userAnswer = "Fyodor Dostoyevsky";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByAuthor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByAuthor_3){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "Author";
    string userAnswer = "Fyodor Dostoyevsky";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByAuthor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByAuthor_4){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "author";
    string userAnswer = "Fyodor Dostoyevsky";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByAuthor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByAuthor_5){
    // 1984#Big Brother is always watching#8.4#1949#Dystopian#George Orwell
    string choice = "2";
    string userAnswer = "George Orwell";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByAuthor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}



TEST(TestingUserFile, SearchBookByAuthor_6){
    // 1984#Big Brother is always watching#8.4#1949#Dystopian#George Orwell
    string choice = "2.";
    string userAnswer = "George Orwell";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

   if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByAuthor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByAuthor_7){
    // 1984#Big Brother is always watching#8.4#1949#Dystopian#George Orwell
    string choice = "Author";
    string userAnswer = "George Orwell";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByAuthor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByAuthor_8){
    // 1984#Big Brother is always watching#8.4#1949#Dystopian#George Orwell
    string choice = "author";
    string userAnswer = "George Orwell";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByAuthor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchBookByGenre_1){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "3";
    string userAnswer = "Crime";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByGenre_2){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "3.";
    string userAnswer = "Crime";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByGenre_3){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "Genre";
    string userAnswer = "Crime";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByGenre_4){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "genre";
    string userAnswer = "Crime";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

   if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByGenre_5){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "3";
    string userAnswer = "Thriller";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

   if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchBookByGenre_6){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "3.";
    string userAnswer = "Thriller";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByGenre_7){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "Genre";
    string userAnswer = "Thriller";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByGenre_8){
    
//Crime and Punishment#Untrustowrhy Narrator#9.5#1866#Crime, Thriller#Fyodor Dostoyevsky
    string choice = "genre";
    string userAnswer = "Thriller";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Crime and Punishment" + newline;
    string line2 = tab + "Description: Untrustowrhy Narrator" + newline;
    string line3 = tab + "Rating: 9.5" + newline;
    string line4 = tab + "Year: 1866" + newline;
    string line5 = tab + "Genres: Crime, Thriller" + newline;
    string line6 = tab + "Authors: Fyodor Dostoyevsky" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

   if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByGenre_9){
    
// 1984#Big Brother is always watching#8.4#1949#Dystopian#George Orwell
    string choice = "3";
    string userAnswer = "Dystopian";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByGenre_10){
    
// 1984#Big Brother is always watching#8.4#1949#Dystopian#George Orwell
    string choice = "3";
    string userAnswer = "Dystopian";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByGenre_11){
    
// 1984#Big Brother is always watching#8.4#1949#Dystopian#George Orwell
    string choice = "3.";
    string userAnswer = "Dystopian";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByGenre_12){
    
// 1984#Big Brother is always watching#8.4#1949#Dystopian#George Orwell
    string choice = "Genre";
    string userAnswer = "Dystopian";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchBookByGenre_13){
    
// 1984#Big Brother is always watching#8.4#1949#Dystopian#George Orwell
    string choice = "genre";
    string userAnswer = "Dystopian";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: 1984" + newline;
    string line2 = tab + "Description: Big Brother is always watching" + newline;
    string line3 = tab + "Rating: 8.4" + newline;
    string line4 = tab + "Year: 1949" + newline;
    string line5 = tab + "Genres: Dystopian" + newline;
    string line6 = tab + "Authors: George Orwell" + newline;
    string line7 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7;

    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchBookByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchMovieByTitle_1){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "1";
    string userAnswer = "The Social Network";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchMovieByTitle_2){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "1.";
    string userAnswer = "The Social Network";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchMovieByTitle_3){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "Title";
    string userAnswer = "The Social Network";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchMovieByTitle_4){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "title";
    string userAnswer = "The Social Network";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") {
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchMovieByDirector_1){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "2";
    string userAnswer = "David Fincher";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") { //Director
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByDirector(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchMovieByDirector_2){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "2.";
    string userAnswer = "David Fincher";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") { //Director
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByDirector(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchMovieByDirector_3){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "Author";
    string userAnswer = "David Fincher";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") { //Director
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByDirector(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchMovieByDirector_4){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "author";
    string userAnswer = "David Fincher";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author") { //Director
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByDirector(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchMovieByGenre_1){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "3";
    string userAnswer = "Drama";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline +newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") { //Genre
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchMovieByGenre_2){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "3.";
    string userAnswer = "Drama";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline +newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") { //Genre
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchMovieByGenre_3){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "Genre";
    string userAnswer = "Drama";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline +newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") { //Genre
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchMovieByGenre_4){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "genre";
    string userAnswer = "Drama";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline +newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "3" || choice == "3." || choice == "Genre" || choice == "genre") { //Genre
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByGenre(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchMovieByActor_1){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "4";
    string userAnswer = "Jesse Eisenberg";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline +newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //actor
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByActor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchMovieByActor_2){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "4.";
    string userAnswer = "Jesse Eisenberg";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline +newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //actor
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByActor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchMovieByActor_3){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "Actor";
    string userAnswer = "Jesse Eisenberg";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline +newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //actor
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByActor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchMovieByActor_4){
// Movie#The Social Network#Lizard Man Makes Site#7.8#2010#Drama#David Fincher#120#Jesse Eisenberg

    string choice = "actor";
    string userAnswer = "Jesse Eisenberg";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Title: The Social Network" + newline;
    string line2 = tab + "Description: Lizard Man Makes Site" + newline;
    string line3 = tab + "Rating: 7.8" + newline;
    string line4 = tab + "Year: 2010" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Jesse Eisenberg" + newline;
    string line7 = tab + "Director: David Fincher" + newline;
    string line8 = tab + "Runtime: 120" + newline;
    string line9 = tab + "-----------" + newline + newline + newline +newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8 + line9;


    if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //actor
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchMovieByActor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchShowsByTitle_1){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "1";
    string userAnswer = "Breaking Bad";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") { //Name
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchShowsByTitle_2){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "1.";
    string userAnswer = "Breaking Bad";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") { //Name
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchShowsByTitle_3){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "Title";
    string userAnswer = "Breaking Bad";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") { //Name
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchShowsByTitle_4){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "title";
    string userAnswer = "Breaking Bad";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "1" || choice == "1." || choice == "Title" || choice == "title") { //Name
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByTitle(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchShowsByDirector_1){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "2";
    string userAnswer = "Vince Gilligan";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author"){ //Author
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByDirector(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchShowsByDirector_2){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "2.";
    string userAnswer = "Vince Gilligan";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author"){ //Author
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByDirector(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}

TEST(TestingUserFile, SearchShowsByDirector_3){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "Author";
    string userAnswer = "Vince Gilligan";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author"){ //Author
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByDirector(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchShowsByDirector_4){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "author";
    string userAnswer = "Vince Gilligan";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "2" || choice == "2." || choice == "Author" || choice == "author"){ //Author
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByDirector(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchShowsByActor_1){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "4";
    string userAnswer = "Aaron Paul";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //actor
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByActor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchShowsByActor_2){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "4.";
    string userAnswer = "Aaron Paul";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //actor
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByActor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchShowsByActor_3){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "Actor";
    string userAnswer = "Aaron Paul";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //actor
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByActor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
}


TEST(TestingUserFile, SearchShowsByActor_4){
// Show#Breaking Bad#Man with cancer makes drugs#9.0#2008#Drama#Vince Gilligan#Aaron Paul,Bryan Cranston

    string choice = "actor";
    string userAnswer = "Aaron Paul";
    SearchClass* search= new SearchClass("TestBooks.txt", "TestMS.txt");
    string tab = "\t";
    string newline = "\n";
    string line0 = tab + "-----------" + newline;
    string line1 = tab + "Name: Breaking Bad" + newline;
    string line2 = tab + "Description: Man with cancer makes drugs" + newline;
    string line3 = tab + "Rating: 9" + newline;
    string line4 = tab + "Year: 2008" + newline;
    string line5 = tab + "Genres: Drama" + newline;
    string line6 = tab + "Actors: Aaron Paul, Bryan Cranston" + newline;
    string line7 = tab + "Director: Vince Gilligan" + newline;
    string line8 = tab + "-----------" + newline + newline + newline + newline;
    string expected_output = line0 + line1 + line2 + line3 + line4 + line5 + line6+ line7 + line8;


    if (choice == "4" || choice == "4." || choice == "Actor" || choice == "actor") { //actor
        stringstream output_SearchClass;
        streambuf* old_cout_streambuf = cout.rdbuf(); // save the old buffer to restore it later
        
        cout.rdbuf(output_SearchClass.rdbuf()); // redirect cout to output
        search->SearchShowByActor(userAnswer);
        cout.rdbuf(old_cout_streambuf); // restore cout
        ASSERT_EQ(output_SearchClass.str(), expected_output);
    }
} 
