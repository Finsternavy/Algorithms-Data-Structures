//
// Created by Finst on 12/12/2018.
//

#ifndef ALGORITHMS_DATA_STRUCTURES_MAZESQUARE_H
#define ALGORITHMS_DATA_STRUCTURES_MAZESQUARE_H


#include <string>

class MazeSquare {

public:
    enum squareType {START = 1, OPEN = 2, WALL = 3, FINISH = 4};
    MazeSquare(squareType c);
    char charArray[3][3];
    void generateObjectArray(enum squareType);
    void printObjectArray();

private:




protected:


};


#endif //ALGORITHMS_DATA_STRUCTURES_MAZESQUARE_H
