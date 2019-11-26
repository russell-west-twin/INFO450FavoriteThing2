//this means a single compilation

#pragma once

#include "NBA2k.h"

 

 

class NBA2KList

{

protected:

    nbaGame numOfList[100];

    int list;

 

 

public:

    NBA2KList();

            void show();

            int addGame();

            bool duplicateGameInfo(nbaGame game);

    int readFile(string file);

    int writeFile(string file);

};

