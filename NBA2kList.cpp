#include "NBA2kList.h"

#include <iostream>

#include <string>

#include <fstream>

using namespace std;

 

//Using a Constructor here

NBA2KList::NBA2KList()

{

    //setting the size equal to 0.

    list = 0;

}

 

 

// This loop is going through the array and if we find a match in the playerCover name and the releaseDate, then it is a duplicate.

/*For extra credit, whenever there's a duplicate in the array's list; the user is asked if he or she

    wants to delete their existing information or not.

*/

 

// If there is no duplicate, then that info is added.

 

bool NBA2KList::duplicateGameInfo(nbaGame game)

{

    int i;

    for (i = 0;i < list;i++)

    {

        if ((game.retrievePlayerCover() == numOfList[i].retrievePlayerCover()) && (game.retriveReleaseYear() == numOfList[i].retriveReleaseYear()))

        {

            return true;

        }

    }

    return false;

}

 

//This is creatng a new game and ask the user to store information.

int NBA2KList::addGame()

{

    nbaGame newGame;

    newGame.enterGame();

    if (duplicateGameInfo(newGame))

    {

        cout << "It looks like there's already the same Game information with the Player's Cover & Release Date." << endl;

        cout << "Removing this entry so that the 1st entry will still be present. Doing this all avoid duplicates." << endl;

        newGame;

        return 0;

    }

    else

    {

        // This is pointing the objects to the current position in the loop. Then, it goes to the next position in the array.

        numOfList[list] = newGame;

        list++;

        return 0;

    } 

}

 

// This is showing every object in the array.

void NBA2KList::show()

{

    int i;

    for (i=0;i<list;i++)

    {

        cout << numOfList[i] << endl;

        cout << endl;

    }

}

 

int NBA2KList::writeFile(string file)

{

   

    int o; 

            ofstream output;

            output.open(file, ios::app);

            if (!output)

            {

                        cout << "The file failed to open!" << endl;

                        return -1;

            }

            for (o = 0; o< list; o++)

            {

                        output << numOfList[o].retrievePlayerCover() << "|";

                        output << numOfList[o].retriveReleaseYear() << "|";

                        output << numOfList[o].enterGame() << "|";

            }

            output.close();

            return 0;

 

}

 

int NBA2KList::readFile(string file)

{

            ifstream input;

            input.open(file, ios::in);

            if (!input)

            {

                        cout << "Could not open the input file!" << endl;

                        return -1;

            }

 

            // This is the placeholder for the items.

            string playerCover;

            string releaseYear;

    string gameName;

    string inputCharacter;

            while (!input.eof())

            {

                        // Read the file

                        getline(input,inputCharacter, '|');

                        if (inputCharacter.length() >= 1)

                        {

                                    getline(input, playerCover, '|');

                                    getline(input, inputCharacter, '|');

                                    getline(input, releaseYear, '|');

                                    getline(input, inputCharacter, '\n');

            getline(input, gameName, '\n');

 

                                    // Add the data

                                    list[numOfList].retrievePlayerCover;

                                    list[numOfList].retriveReleaseYear;

                                    list[numOfList].enterGame;

                                    list++;

                        }

            }

           

            input.close();

            return 0;

}
