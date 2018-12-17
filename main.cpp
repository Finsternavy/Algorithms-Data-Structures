#include <iostream>
#include <fstream>
#include <sstream>
#include "MazeSquare.h"
#include "MazeGenerator.h"
using namespace std;


int rows;
int columns;
int rowCount;


int main(){

    rows = 10;
    columns = 11;
    rowCount = 1;
    string line;

    //Create instance of MazeGenerator. Constructor fills
    MazeGenerator newMaze(rows, columns);

    //create ifstream object and connect create relationship to input file.
    ifstream mazeInput("input_file.txt");

    if(mazeInput.is_open()){

        cout << "input_file is open." << endl;

        //Used to omit first line of input file. Have not worked out how to assign to maze dimensions.
        getline(mazeInput, line);

        //As long as their are lines to read in input file, continue to execute.
        while (! mazeInput.eof()){
            //assigned first value of input file to int rows, second to int columns
            mazeInput >> rows >> columns;
            //Assigns first line of input file to start space
            if (rowCount == 1){
                //Replaces index of maze with Starting point from input file.
                newMaze.myMaze[rows][columns] = MazeSquare::squareType::START;
                //Controls assignment of lines read in.
                rowCount++;
                cout << rowCount << endl;
                //Assigns second line of input file to Finish square.
            }else if(rowCount == 2){
                newMaze.myMaze[rows][columns] = MazeSquare::squareType::FINISH;
                rowCount++;
                cout << rowCount << endl;
                //Assigns remaining lines to override objects in the maze to walls.
            }else if (rowCount = 3){
                newMaze.myMaze[rows][columns] = MazeSquare::squareType::WALL;
                cout << rowCount << endl;

            }

            //Print values of rows and columns at each pass to ensure they are read in and assigned correctly.
            cout << "rows = " << rows << "  Columns = " <<columns << endl;


        }

    }else{

        cout << "Something went wrong.." << endl;

    }

    //Reasign values of rows and columns to print correct size of maze.
    rows = 10;
    columns = 11;

    //Connect ofstream object to the output file
    ofstream mazeOutput("output.file.txt");

    //Prints the maze per the print function defined in MazeGenerator to verify code in console.
    newMaze.printMaze(rows, columns);

    //For loop prints contents of the maze to the output file.
    for (int i = 0; i < rows; i++){

        for (int k = 0; k < 3; k++) {

            for (int j = 0; j < columns; j++) {

                mazeOutput << newMaze.myMaze[i][j].charArray[k];

            }

            mazeOutput << endl;

        }

    }


    return 0;
}