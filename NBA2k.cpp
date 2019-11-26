#include "NBA2k.h"

 

 

//constructor

nbaGame::nbaGame()

{

            playerCover = "";

            gameSystem = "";

            releaseYear = 0;

            purchaseDate = 0;

            nba2kOnlineSupport = NULL;

}

 

 

string nbaGame::retrievePlayerCover()

{

            return playerCover;

}

 

int nbaGame::retriveReleaseYear()

{

            return releaseYear;

}

 

// ask the user to enter he or she favorite NBA 2K game

int nbaGame::enterGame()

{

 

 

            cout << "What is your favorite NBA 2K game player cover?? Only people who loves the game of basketball can enter!" << endl;;

            getline(cin, playerCover);

 

            cout << "What is the release Date?" << endl;

            cin >> releaseYear;

 

            cout << "What game system does your NBA 2K game supportt?" << endl;

            cin >> gameSystem;

 

            cout << "What is your purschase date?" << endl;

            cin >> purchaseDate;

 

            // Performing a switch statement to show which years has the 2k online support and which years does not.)

            switch (releaseYear)

            {

            case 2000 :

                        nba2kOnlineSupport = false;

                        break;

            case 2001 :

                        nba2kOnlineSupport = false;

                        break;

            case 2002 :

                        nba2kOnlineSupport = false;

                        break;

            case 2003 :

                        nba2kOnlineSupport = false;

                        break;

            case 2004 :

                        nba2kOnlineSupport = false;

                        break;

            case 2005 :

                        nba2kOnlineSupport = false;

                        break;

            case 2006 :

                        nba2kOnlineSupport = false;

                        break;

            case 2007 :

                        nba2kOnlineSupport = true;

                        break;

            case 2008 :

                        nba2kOnlineSupport = true;

                        break;

            case 2009 :

                        nba2kOnlineSupport = true;

                        break;

            case 2010 :

                        nba2kOnlineSupport = false;

        break;

    case 2011 :

                        nba2kOnlineSupport = true;

        break;

    case 2012 :

                        nba2kOnlineSupport = true;

                        break;

    case 2013 :

                        nba2kOnlineSupport = false;

                        break;

    case 2014 :

                        nba2kOnlineSupport = true;

                        break;

    case 2015 :

                        nba2kOnlineSupport = false;

                        break;

    case 2016 :

                        nba2kOnlineSupport = true;

                        break;

    case 2017 :

                        nba2kOnlineSupport = true;

                        break;

    case 2018 :

                        nba2kOnlineSupport = true;

                        break;

    case 2019 :

                        nba2kOnlineSupport = true;

                        break;

            default:

                        break;

            }

            cin.clear();

            cin.ignore();

            return 0;

}

 

 

//This is an overloaded function which will display game to the output.

ostream & operator<<(ostream &os, const nbaGame &game)

{

            string x;

            if (game.nba2kOnlineSupport)

            {

                        x = "Supported.";

            }

            else

            {

                        x = "Not Supported";

            }

            os << "Player Cover: " << game.playerCover << endl;

            os << "Game system the system supports: " << game.gameSystem << endl;

            os << "Release Year: " << game.releaseYear << endl;

            os << "Purchase Date: " << game.purchaseDate << endl;

            os << "Is the 2k game supported?? " << x << endl;

            return os;

}
