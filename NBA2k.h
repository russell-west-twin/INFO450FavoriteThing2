#pragma once

#include <iostream>

#include <string>

using namespace std;

 

 

class nbaGame

{

    protected:

 

    string playerCover;

    string gameSystem;

    int releaseYear;

    int purchaseDate;

    bool nba2kOnlineSupport; // Artcle of NBA 2K history. https://en.wikipedia.org/wiki/NBA_2K If the support == true, else false.

    // article on 2k onlne support https://support.2k.com/hc/en-us

 

    public:

        nbaGame();

        string retrievePlayerCover();

        int retriveReleaseYear();

        int enterGame();

        friend ostream & operator<<(ostream &os, const nbaGame &game); //creating a friend function here

};
