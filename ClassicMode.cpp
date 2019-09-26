#include "ClassicMode.h"
#include <iostream>

using namespace std;

ClassicMode::ClassicMode(){
  //default constructor

}

ClassicMode::~ClassicMode(){
  delete [] myGrid;
}

int ClassicMode::neighbors(int row, int col){
  int n = 8;
  if(row == 0){
    n -= 3;
    if(col == 0){
      n -= 2;
      if(!mygrid[0][1]){
        --n;
      }
      if(!mygrid[1][0]){
        --n;
      }
      if(!mygrid[1][1]){
        --n;
      }
    } else if(col == mygrid[row].length){
      
    }
  }
  return n;
}

void ClassicMode::createGrid(int r, int c, double d, string l){
  myGrid = new bool* [r];
  for (int i = 0; i < r; ++i){
    myGrid[i] = new bool[c];
    for(int j = 0; j < c; ++j){
      //generate random number
      //if number < d, true, else false
      //myGrid[i][j] =
    }
  }
}
