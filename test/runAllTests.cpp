#include "gtest/gtest.h"
#include "../include/Book.h"
#include "../include/Movie.h"
#include <iostream>
#include <vector>


TEST(Constructor, testMovie){
vector<string> genres;
genres.push_back("Thriller");
vector<string> actor;
actor.push_back("Robert Pattinson");
Movie* testMovie = new Movie("The Batman", "Batman",7.8,2022,genres,"Mat Reeves",176,actor);

EXPECT_EQ(testMovie->getTitle(),"The Batman");

}


