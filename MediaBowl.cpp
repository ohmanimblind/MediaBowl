#include <iostream>
#include "Movie.h"
using namespace std;

int main(){

vector<string> testGenre;
testGenre.push_back("Animation");
testGenre.push_back("Action");

Movie testMovie("Puss In Boots: The Last Wish", 9.9, testGenre , 2023);

testMovie.printMovie();

}