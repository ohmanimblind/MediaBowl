#include "Movie.h"


Movie::Movie(string m, double r, vector<string> g, int y){

    MovieName = m; 
    MovieRating = r;
    MovieGenres = g ;
    MovieYear = y ;


}


string Movie::getName()const{

return MovieName;

}

double Movie::getRating()const{

return MovieRating;
}

int Movie::getYear()const{

return MovieYear;

}

string Movie::getGenres()const{

string GenreString = "";
for(int i = 0 ; i < MovieGenres.size() - 1; ++i){
GenreString = GenreString + MovieGenres.at(i) ;

if( i + 1 != MovieGenres.size()-1 )

GenreString = GenreString + ", ";

}

return GenreString = "";

}

void Movie::printMovie(){

cout << this->getName() << endl;
cout << this->getRating() << endl;
cout << this->getGenres() << endl;
cout << this->getYear() << endl;




}