#include "NBA2k.h"

#include "NBA2kList.h"

 

#include <iostream>

#include <string>

using namespace std;

 

void directions();

void howTo();

 

int main()

{

            nbaGame myDessert;

            NBA2KList gameList;

            directions();

            char choice;

 

            gameList.readFile("c:\\Users\\sfx736\\Documents\\JoshText.txt");

 

            gameList.addGame();

            gameList.addGame();

            gameList.addGame();

            gameList.show();

            gameList.writeFile("c:\\Users\\sfx736\\Documents\\JoshText.txt");

 

            do

            {

                        // Additional NBA2K game

                        gameList.addGame();

 

                        // Displays instructions to the user

                        howTo();

 

        //user's input       

                        cin >> choice;

                        cout << endl;

        //clear error flags

                        cin.clear();

        //removes input info that may cause a failure

                        cin.ignore();

 

            } while (choice == 'Y' || choice == 'y');

 

            // List of generated objects. Does this by using the friend function.

            gameList.show();

 

    return 0;

}

 

void howTo()

{

            cout << endl;

            cout << "**" << " ********************* " << "**" << endl;

            cout << endl;

            cout << "Do you want to add an additional NBA 2K game? For Yes, type Y or y" << endl;

            cout << endl;

    cout << endl;

    cout << endl;

    cout << "If that NBA 2k game is not your favorite" << endl;

            cout << "anymore, then type in the same Game's" << endl;

            cout << "Release Year and Player on the Cover." << endl;

            cout << "**" << " ********************* " << "**" << endl;

}

 

void directions()

{

            cout << "**" << " ********************* " << "**" << endl;

            cout << "**" << "      Have a list    " << "**" << endl;

            cout << "**" << "    of your favorite  " << "**" << endl;

            cout << "**" << "  NBA 2K Games!  " << "**" << endl;

            cout << "**" << "     Please enter:    " << "**" << endl;

            cout << "**" << "  Game's Release Year, Player on the Cover " << "**" << endl;

            cout << "**" << "  Game System, " << "**" << endl;

            cout << "**" << "  2K online Support  " << "**" << endl;

            cout << "**" << "  and Purchase Date. " << "**" << endl;

            cout << "**" << " ********************* " << "**" << endl;

            cout << endl;

}
