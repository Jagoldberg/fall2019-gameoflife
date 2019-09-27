#include "ClassicMode.h"
#include <iostream>

using namespace std;

ClassicMode::ClassicMode(){
  //default constructor

}

ClassicMode::~ClassicMode(){
  delete [] grid;
}

int ClassicMode::neighbors(int row, int col, int rowSize, int colSize){
  int n = 8;
  if(row == 0){ //top row
    n -= 3;
    if(col == 0){ // first column
      n -= 2;
      if(col < colSize && !grid[row][col + 1]){
        --n;
      }
      if(row < rowSize && !grid[row + 1][col]){
        --n;
      }
      if((row < rowSize && col <= colSize) && !grid[row + 1][col + 1]){
        --n;
      }
    } else if(col == rowSize-1){ //last column
      n -= 2;
      if(!grid[row][col - 1]){
        --n;
      }
      if(row < rowSize && !grid[row + 1][col]){
        --n;
      }
      if(row < rowSize && !grid[row + 1][col - 1]){
        --n;
      }
    } else {
      if(!grid[row][col -1]){
        --n;
      }
      if(col < colSize && !grid[row][col + 1]) {
        --n;
      }
      if(row < rowSize && !grid[row + 1][col]) {
        --n;
      }
      if(row < rowSize && !grid[row +1][col -1]){
        --n;
      }
      if((row < rowSize && col < colSize) && !grid[row +1][col + 1]){
        --n;
      }
    }
  } else if (row == rowSize-1){ // last row
    n-=3;
    if(col == 0){
      n -= 2;
      if(!grid[row -1][col]){
        --n;
      }
      if(col < colSize &&!grid[row -1][col +1]){
        --n;
      }
      if(col < colSize && !grid[row][col +1]){
        --n;
      }
    } else if(col == colSize-1){
      n -= 2;
      if(!grid[row -1][col]){
        --n;
      }
      if(!grid[row -1][col -1]){
        --n;
      }
      if (!grid[row][col -1]){
        --n;
      }
    } else {
      if(!grid[row][col -1]){
        --n;
      }
      if(col < colSize && !grid[row][col + 1]) {
        --n;
      }
      if(!grid[row - 1][col]) {
        --n;
      }
      if(!grid[row -1][col -1]){
        --n;
      }
      if(col < colSize && !grid[row - 1][col + 1]){
        --n;
      }
    }
  } else {
    if(col == 0){
      n -= 3;
      if(!grid[row -1][col]){
        --n;
      }
      if(col < colSize && !grid[row-1][col+1]){
        --n;
      }
      if(col < colSize && !grid[row][col +1]){
        --n;
      }
      if((row < rowSize && col < colSize) && !grid[row+1][col +1]){
        --n;
      }
      if(row < rowSize && !grid[row+1][col]){
        --n;
      }
    } else if(col == colSize-1){
      n -= 3;
      if(!grid[row -1][col]){
        --n;
      }
      if(!grid[row-1][col -1]){
        --n;
      }
      if(!grid[row][col-1]){
        --n;
      }
      if(row < rowSize && !grid[row +1][col -1]){
        --n;
      }
      if(row < rowSize && !grid[row +1][col]){
        --n;
      }
    }
  }
  return n;
}
