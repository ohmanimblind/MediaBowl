[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-c66648af7eb3fe8bc4f294546bfd86ef473780cde1dea487d3c4ff354943c9ae.svg)](https://classroom.github.com/online_ide?assignment_repo_id=9932804&assignment_repo_type=AssignmentRepo)
 
# MediaBowl
 
 > Authors: [Anthony Padilla](https://github.com/ohmanimblind), [Arrdya Srivastav](https://github.com/arrdyas),  [Luis Magallanes Banuelos](https://github.com/Luiy15), [Kenneth Maina](https://github.com/k-main)


## Project Description

 
 "MediaBowl" will be a program where search a database of Movies, Shows and Books, where they can recieve reccomendations based on their tastes. A user can input a movie, book, or show they enjoyed and get reccommended other media that are similar in style. A user could also parse through said data based on actors, year released, etc. Users can be reccomended only books, movies, shows, are all 3 depending on what they're looking for in specefic. The program can also simply be used to find information regarding a specific title.


 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to:
 > * Create an "Epic" (note) for each feature. Place these epics in the `Product Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Break down the "Epics" into smaller actionable user stories (i.e. smaller development tasks). Convert them into issues and assign them to team members. Place these in the `TODO` column.
 >   * These cards should represent roughly 7 days worth of development time for your team. Then, once the sprint is over you should be repeating these steps to plan a new sprint, taking you until your second scrum meeting with the reader in phase III.
 > * Schedule two check-ins using Calendly. You need to pick both time slots during your lab on week 6. Your entire team must be present for both check-ins.
 >   * The first check-in needs to be scheduled with your lab TA. During that meeting, you will discuss your project design/class diagram from phase II.
 >   * The second check-in should be scheduled with a reader. During that meeting you will discuss:
 >     * The tasks you are planning for the first sprint
 >     * How work will be divided between the team members
## Class Diagram
https://drive.google.com/file/d/1mOU1FNlvHP8cEMHCy7PUbq2NKGVkmipp/view?usp=sharing
 
 The program will work as follows: one file will focus on converting a list of scraped data(done with python), into Movie,Show, and Book objects.From there, these objects will be used to populate a database implemented throug hash tables. The Database class is also seperate than the StackMaker class, in order to be clear on what the purpose of both programs are. The SeachClass and User class are seperate in order to follow SOLID principles. The Single Responsibility principle is followed by making a distinct class for Searching, as well as a seperate class made to create the object stacks rather than have it done in the Data class (where the hashtables are filled). The dependecny inversion principle is followed by decoupling the user class for the search class, which helps if a different method of parsing through the data was desired, such as a binary tree or an SQL database, another class could simply be made without disturbing the user class. Interface segreation was followed by seperating books from movies and shows, and the template method was followed in order to make the abstract class , media. There is an argument to be made that the hashtables are in violation of the 3 Strike and Refactor rule, however, for this specific project and its specifications, no other forms of media will be added. In the event that more forms of media would be added, then refactoring would be need.
 
 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
