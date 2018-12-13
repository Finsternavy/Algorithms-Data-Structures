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

void MazeSquare::printObjectArray() {

    for(int row = 0; row < 3; row++){

        for(int column = 0; column < 3; column++){

            cout << charArray[row][column];

        }

        cout << endl;

    }

}

void MazeSquare::generateObjectArray(squareType c){

    switch(c){

        case WALL: {

            for(int row = 0; row < 3; row++){
                for(int col = 0; col < 3; col++){
                    charArray[row][col] = 'X';
                }
            }
            break;
        }

        case OPEN: {

            for(int row = 0; row < 3; row++){
                for(int col = 0; col < 3; col++){
                    charArray[row][col] = '.';
                }
            }
            break;

        }

        case START: {

            for(int row = 0; row < 3; row++){
                for(int col = 0; col < 3; col++){
                    charArray[row][col] = '.';
                }
            }
            charArray[1][1] = 'S';
            break;

        }

        case FINISH:  {

            for(int row = 0; row < 3; row++){
                for(int col = 0; col < 3; col++){
                    charArray[row][col] = '.';
                }
            }
            charArray[1][1] = 'F';
            break;

        }

        //Default not needed since function passes in enum value.

    }
}
