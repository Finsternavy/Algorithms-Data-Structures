//
// Created by Finst on 12/12/2018.
//

#include "MazeGenerator.h"
#include "MazeSquare.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

MazeGenerator::MazeGenerator(int rows, int columns) : rows (rows), columns (columns) {

    generateMaze(rows, columns);

}

void MazeGenerator::generateMaze(int rows, int columns){

    //generates a default maze with all points as open objects.
    for (int i = 0; i < rows; i++){

        myMaze[i] = new MazeSquare[columns];

        for (int j = 0; j < columns; j++){

           myMaze[i][j] = MazeSquare(MazeSquare::squareType::OPEN);
        }

    }

}

void MazeGenerator::printMaze(int rows, int columns){

    //For loop prints the first string of each object in the first row, then the second, then the third for formatting.
    for (int i = 0; i < rows; i++){

        for (int k = 0; k < 3; k++) {

            for (int j = 0; j < columns; j++) {

                cout << myMaze[i][j].charArray[k];

            }

            cout << endl;

        }

    }

}



