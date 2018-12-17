//
// Created by Finst on 12/12/2018.
//

#ifndef ALGORITHMS_DATA_STRUCTURES_MAZESQUARE_H
#define ALGORITHMS_DATA_STRUCTURES_MAZESQUARE_H


#include <string>

using namespace std;

class MazeSquare {

public:
    //Used to control data members of desired mazeSqaure type.
    enum squareType {START = 1, OPEN = 2, WALL = 3, FINISH = 4};
    MazeSquare(squareType c);
    MazeSquare();
    string charArray[3];
    void generateObjectArray(enum squareType);
    //Bool values will be used for navigation when implemented.
    bool isOpen;
    bool isStart;
    bool isFinish;
    void printObjectArray();


private:




protected:


};


#endif //ALGORITHMS_DATA_STRUCTURES_MAZESQUARE_H
