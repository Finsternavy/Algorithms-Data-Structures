//
// Created by Finst on 12/12/2018.
//

#ifndef ALGORITHMS_DATA_STRUCTURES_MAZEGENERATOR_H
#define ALGORITHMS_DATA_STRUCTURES_MAZEGENERATOR_H



#include "MazeSquare.h"
#include <fstream>

class MazeGenerator {

public:
    MazeGenerator(int rows, int columns);
    void generateMaze(int rows, int columns);
  //  void printMaze(MazeGenerator myMaze);
    int const rows;
    int const columns;
    //Pointer of a pointer references to instantiate 2D array of objects of Class MazeSquare
    MazeSquare **myMaze = new MazeSquare*[rows];
    void printMaze(int rows, int columns);

};


#endif //ALGORITHMS_DATA_STRUCTURES_MAZEGENERATOR_H
