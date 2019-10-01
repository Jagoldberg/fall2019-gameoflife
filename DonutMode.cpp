#include "DonutMode.h"
#include <iostream>

using namespace std;

DonutMode::DonutMode(){
  //default constructor

}

DonutMode::~DonutMode(){

}

int DonutMode::neighbors(int row, int col, int rowSize, int colSize, bool **grid){
  int n = 8;
  if(row == 0){ //top row
    if(col == 0){ // first column
      if(col < colSize && !grid[row][col + 1]){
        --n;
      }
      if(row < rowSize && !grid[row + 1][col]){
        --n;
      }
      if((row < rowSize && col <= colSize) && !grid[row + 1][col + 1]){
        --n;
      }
      if(row < rowSize && !grid[rowSize - 1][col]){
        --n;
      }
      if(col < colSize && !grid[rowSize - 1][col + 1]){
        --n;
      }
      if(!grid[rowSize -1][colSize - 1]){
        --n;
      }
      if(!grid[row][colSize - 1]){
        --n;
      }
      if(row < rowSize && !grid[row + 1][colSize -1]){
        --n;
      }
    } else if(col == colSize-1){ //last column
      if(!grid[row][col - 1]){
        --n;
      }
      if(row < rowSize && !grid[row + 1][col]){
        --n;
      }
      if(row < rowSize && !grid[row + 1][col - 1]){
        --n;
      }
      if(!grid[rowSize-1][col]){
        --n;
      }
      if (!grid[rowSize-1][0]){
        --n;
      }
      if (!grid[rowSize-1][col -1]){
        --n;
      }
      if(!grid[row][0]){
        --n;
      }
      if(row < rowSize && !grid[row + 1][0]){
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
      if(!grid[rowSize -1][col]){
        --n;
      }
      if(!grid[rowSize-1][col -1]){
        --n;
      }
      if(col < colSize && !grid[rowSize-1][col + 1]){
        --n;
      }
    }
  } else if (row == rowSize-1){ // last row
    n-=3;
    if(col == 0){
      if(!grid[row -1][col]){
        --n;
      }
      if(col < colSize &&!grid[row -1][col +1]){
        --n;
      }
      if(col < colSize && !grid[row][col +1]){
        --n;
      }
      if(!grid[row-1][colSize -1]){
        --n;
      }
      if(!grid[row][colSize-1]){
        --n;
      }
      if(!grid[rowSize-1][colSize-1]){
        --n;
      }
      if(!grid[0][col]){
        --n;
      }
      if(col < colSize && !grid[0][col+1]){
        --n;
      }
    } else if(col == colSize-1){
      if(!grid[row -1][col]){
        --n;
      }
      if(!grid[row -1][col -1]){
        --n;
      }
      if (!grid[row][col -1]){
        --n;
      }
      if(!grid[0][col-1]){
        --n;
      }
      if(!grid[0][col]){
        --n;
      }
      if(!grid[0][0]){
        --n;
      }
      if(!grid[row][0]){
        --n;
      }
      if(!grid[row-1][0]){
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
      if(!grid[0][col-1]){
        --n;
      }
      if(!grid[0][col]){
        --n;
      }
      if(col < colSize && !grid[0][col + 1]){
        --n;
      }
    }
  } else {
    if(col == 0){
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
      if(!grid[row][colSize -1]){
        --n;
      }
      if(!grid[row -1][colSize -1]){
        --n;
      }
      if(row < rowSize && !grid[row + 1][colSize-1]){
        --n;
      }
    } else if(col == colSize-1){
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
      if(!grid[row][0]){
        --n;
      }
      if(!grid[row-1][0]){
        --n;
      }
      if(row < rowSize && !grid[row + 1][0]){
        --n;
      }
    }
  }
  return n;
}
