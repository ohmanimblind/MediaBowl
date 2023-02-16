USE media_bowl;

CREATE PROCEDURE add_movie(
							IN movie_release_year int(11),
                            IN movie_title varchar(50), 
                            IN movie_rating double(4,2),
                            IN movie_runtime int(11),
                            IN movie_description varchar (50))
	INSERT INTO movies (release_year, title, rating, runtime, description)
		VALUES (movie_release_year, movie_title, movie_rating, movie_runtime, movie_description);

CREATE PROCEDURE add_movie_genre(
							IN movie_title varchar(50),
                            IN movie_genre varchar(50))
	INSERT INTO movie_genre(movie_id, genre)
			VALUES ((SELECT movie_id FROM movies WHERE movie_title = title), movie_genre);

CREATE PROCEDURE add_movie_director(
							IN movie_title varchar(50),
                            IN movie_director varchar(50))
	INSERT INTO director(movie_id, genre)
			VALUES ((SELECT movie_id FROM movies WHERE movie_title = title), movie_genre);

CREATE PROCEDURE add_movie_actor(
							IN movie_title varchar(50),
                            IN movie_director varchar(50))
	INSERT INTO director(movie_id, actor)
			VALUES ((SELECT movie_id FROM movies WHERE movie_title = title), movie_genre);