//
// Created by Finst on 12/12/2018.
//

#include "MazeSquare.h"
#include <iostream>
#include <string>

using namespace std;

MazeSquare::MazeSquare(squareType c)
{
    generateObjectArray(c);

}

MazeSquare::MazeSquare() {

    generateObjectArray(OPEN);

}

void MazeSquare::printObjectArray() {

    for(int row = 0; row < 3; row++){

        cout << charArray[row];

        cout << endl;

    }

}

void MazeSquare::generateObjectArray(squareType c){

    switch(c){

        case WALL: {
            isOpen = false;
            for(int row = 0; row < 3; row++){

                charArray[row] = "XXX";

            }
            break;
        }

        case OPEN: {

            for(int row = 0; row < 3; row++){

                charArray[row] = "...";

            }
            break;

        }

        case START: {
            isStart = true;
            charArray[0] = "...";
            charArray[1] = ".S.";
            charArray[2] = "...";

            break;

        }

        case FINISH:  {
            isFinish = true;
            charArray[0] = "...";
            charArray[1] = ".F.";
            charArray[2] = "...";

            break;

        }

            //Default not needed since function passes in enum value.

    }
}

