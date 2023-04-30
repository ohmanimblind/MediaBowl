[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=9932804&assignment_repo_type=AssignmentRepo)
 
# MediaBowl
 
 > Authors: [Anthony Padilla](https://github.com/ohmanimblind), [Arrdya Srivastav](https://github.com/arrdyas),  [Luis Magallanes Banuelos](https://github.com/Luiy15), [Kenneth Maina](https://github.com/k-main)


## Project Description

 
 "MediaBowl" will be a program where search a database of Movies, Shows and Books, where they can recieve reccomendations based on their tastes. A user can input a movie, book, or show they enjoyed and get reccommended other media that are similar in style. A user could also parse through said data based on actors, year released, etc. Users can be reccomended only books, movies, shows, are all 3 depending on what they're looking for in specefic. The program can also simply be used to find information regarding a specific title.


## Class Diagram
https://drive.google.com/file/d/1mOU1FNlvHP8cEMHCy7PUbq2NKGVkmipp/view?usp=sharing
![MediaBowl_UMLDiagram](https://user-images.githubusercontent.com/122424470/225462978-6786bd99-a389-4d7e-bf9b-858b1e46ba9f.jpg)

 
 The program will work as follows: one file will focus on converting a list of scraped data(done with python), into Movie,Show, and Book objects.From there, these objects will be used to populate a database implemented throug hash tables. The Database class is also seperate than the StackMaker class, in order to be clear on what the purpose of both programs are. The SeachClass and User class are seperate in order to follow SOLID principles. The Single Responsibility principle is followed by making a distinct class for Searching, as well as a seperate class made to create the object stacks rather than have it done in the Data class (where the hashtables are filled). The dependecny inversion principle is followed by decoupling the user class for the search class, which helps if a different method of parsing through the data was desired, such as a binary tree or an SQL database, another class could simply be made without disturbing the user class. Interface segreation was followed by seperating books from movies and shows, and the template method was followed in order to make the abstract class , media. There is an argument to be made that the hashtables are in violation of the 3 Strike and Refactor rule, however, for this specific project and its specifications, no other forms of media will be added. In the event that more forms of media would be added, then refactoring would be need.
 
 
 ## Screenshots
 ![Screenshot (42)](https://user-images.githubusercontent.com/122424470/225461223-cfb3f14a-8969-468d-ad37-da6f0695e36b.png)
 ![Screenshot (45)](https://user-images.githubusercontent.com/122424470/225462579-127ed260-d827-4900-8f82-e3f2959a2ae1.png)
 ![Screenshot (42)](https://user-images.githubusercontent.com/122424470/225463849-73c864b2-7967-4f4d-98e0-5eafb220f486.png)


 ## Installation/Usage
 Step 1: Run cmake .
 Step 2: Run make
 Step 3: Run main
 
 SPECIFICATIONS: Every Search functions only takes in one parameter. Also note, that if an item is not found, you may have mispelled. Thank you for understanding.
 TROUBLESHOOTING: If there is an error during compilation, try deleting the lib folder, and repeat the steps.
 DO NOT RENAME OR DELETE THE TEXT FILES AS THEY ARE  ESSENTIAL TO THE PROGRAM RUNNING CORRECTLY (Thank You For Understanding).
 
 ## Testing
 ![Screenshot (46)](https://user-images.githubusercontent.com/122424470/225460477-674024a7-c0cd-4dad-aa7e-220dbfe77444.png)
 ![Screenshot (44)](https://user-images.githubusercontent.com/122424470/225460775-2076afff-1b69-487d-ae37-33924c5ecdeb.png)

The Google Testing framework was used to validate the contsructors for every class, every object, as well as validating correct searches based on user prompts. As seen in the valgrind report, this achieves memcheck clean.
 
