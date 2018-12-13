#include <iostream>
#include "MazeSquare.h"
using namespace std;




int main(){

    MazeSquare newSquare(MazeSquare::squareType::OPEN);
    MazeSquare myMaze[2][3]{{MazeSquare::squareType::WALL, MazeSquare::squareType::OPEN, MazeSquare::squareType::FINISH},
                            {MazeSquare::squareType::START, MazeSquare::squareType::OPEN, MazeSquare::squareType::WALL}};
 // change to function that prints the maze in correct format.
    //insures maze only prints the correct number of maze rows.
    for(int i = 0; i < 2; i++) {
        //loop need to control row print format
        for (int printRow = 0; printRow < 2; printRow++) {
            //loop needed to control column print format
            for (int printCol = 0; printCol < 3; printCol++) {
                //skips down to next row of objects
                for (int rows = i; rows < 2; rows++) {
                    //prints row of maze objects
                    for (int columns = 0 ; columns < 3; columns++) {
                        //skips down to next row of object array
                        for (int objRow = printCol; objRow < 3; objRow++) {
                            //prints row of the object array
                            for (int objCol = 0; objCol < 3; objCol++) {
                                //prints current character the index of the objects array.
                                cout << myMaze[rows][columns].charArray[objRow][objCol];

                            }
                            //bypass next rows of the object until all first rows of all objects in current row have printed.
                            objRow = 3;

                        }

                    }
                    //prevent loop from going to next row until all the objects in current row of maze are fully printed.
                    rows = 2;
                    //formats maze shifting down to print next row under first row of objects.
                    cout << endl;
                }

            }
            //allows loop to move to next row and maintain format.
            printRow = 2;
        }

    }

    cout << "\n\n";

    newSquare.printObjectArray();

    return 0;
}