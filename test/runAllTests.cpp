#include "gtest/gtest.h"
#include "../include/Book.h"
#include "../include/Movie.h"
#include "../include/Show.h"
#include <iostream>
#include <vector>


TEST(MovieConstructor, testMovieName){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves",176,actor);

EXPECT_EQ(testMovie->getTitle(),"The Batman");

}

TEST(MovieConstructor, testMovieRating){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves",176,actor);

EXPECT_EQ(testMovie->getRating(),7.8);

}

TEST(MovieConstructor, testMovieDirector){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves",176,actor);

EXPECT_EQ(testMovie->getDirector(),"Mat Reeves");

}

TEST(MovieConstructor, testMovieYear){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves",176,actor);

EXPECT_EQ(testMovie->getYear(),2022);

}

TEST(MovieConstructor, testMovieGenre){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves",176,actor);

EXPECT_EQ(testMovie->getGenres().at(0),"Thriller");

}

TEST(MovieConstructor, testMovieRuntime){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves",176,actor);

EXPECT_EQ(testMovie->getRuntime(),176);

}

TEST(MovieConstructor, testMovieActor){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves",176,actor);

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
vector<string> actor;
actor.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,actor,3);

EXPECT_EQ(testShow->getTitle(),"Hannibal");

}

TEST(ShowConstructor, testShowDescription){
vector<string>genres;
genres.push_back("Detective");
vector<string> actor;
actor.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,actor,3);

EXPECT_EQ(testShow->getDescription(),"Serial Killer enjoys meal");

}

TEST(ShowConstructor, testShowRating){
vector<string>genres;
genres.push_back("Detective");
vector<string> actor;
actor.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,actor,3);

EXPECT_EQ(testShow->getRating(),8.5);

}
TEST(ShowConstructor, testShowYear){
vector<string>genres;
genres.push_back("Detective");
vector<string> actor;
actor.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,actor,3);

EXPECT_EQ(testShow->getYear(),2013);

}

TEST(ShowConstructor, testShowGenre){
vector<string>genres;
genres.push_back("Detective");
vector<string> actor;
actor.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,actor,3);

EXPECT_EQ(testShow->getGenres().at(0),"Detective");

}

TEST(ShowConstructor, testShowActors){
vector<string>genres;
genres.push_back("Detective");
vector<string> actor;
actor.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,actor,3);

EXPECT_EQ(testShow->getActors().at(0),"Mads Mikkelsen");

}

TEST(ShowConstructor, testShowSeasons){
vector<string>genres;
genres.push_back("Detective");
vector<string> actor;
actor.push_back("Mads Mikkelsen");

Show* testShow = new Show("Hannibal","Serial Killer enjoys meal",8.5,2013,genres,actor,3);

EXPECT_EQ(testShow->getSeasons(),3);

}