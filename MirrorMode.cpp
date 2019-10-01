#include "MirrorMode.h"
#include <iostream>

using namespace std;

MirrorMode::MirrorMode(){
  //default constructor

}

MirrorMode::~MirrorMode(){

}

int MirrorMode::neighbors(int row, int col, int rowSize, int colSize, bool **grid){
  int n = 8;
  if(row == 0){ //top row
    if(col == 0){ // first column
      if(col < colSize && !grid[row][col + 1]){
        n -= 2;
      }
      if(row < rowSize && !grid[row + 1][col]){
        n-=2;
      }
      if((row < rowSize && col <= colSize) && !grid[row + 1][col + 1]){
        --n;
      }
      if(!grid[row][col]){
        n -= 3;
      }
    } else if(col == colSize-1){ //last column
      if(!grid[row][col - 1]){
        n-=2;
      }
      if(row < rowSize && !grid[row + 1][col]){
        n-=2;
      }
      if(row < rowSize && !grid[row + 1][col - 1]){
        --n;
      }
      if(!grid[row][col]){
        n-=3;
      }
    } else {
      if(!grid[row][col -1]){
        n-=2;
      }
      if(col < colSize && !grid[row][col + 1]) {
        n-=2;
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
      if(!grid[row][col]){
        --n;
      }
    }
  } else if (row == rowSize-1){ // last row
    if(col == 0){
      if(!grid[row -1][col]){
        n-=2;
      }
      if(col < colSize &&!grid[row -1][col +1]){
        --n;
      }
      if(col < colSize && !grid[row][col +1]){
        n-=2;
      }
      if(!grid[row][col]){
        n-=3;
      }
    } else if(col == colSize-1){
      if(!grid[row -1][col]){
        n-=2;
      }
      if(!grid[row -1][col -1]){
        --n;
      }
      if (!grid[row][col -1]){
        n-=2;
      }
      if(!grid[row][col]){
        n-=3;
      }
    } else {
      if(!grid[row][col -1]){
        n-=2;
      }
      if(col < colSize && !grid[row][col + 1]) {
        n-=2;
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
      if(!grid[row][col]){
        --n;
      }
    }
  } else {
    if(col == 0){
      if(!grid[row -1][col]){
        n-=2;
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
        n-=2;
      }
      if(!grid[row][col]){
        --n;
      }
    } else if(col == colSize-1){
      if(!grid[row -1][col]){
        n-=2;
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
        n-=2;
      }
      if(!grid[row][col]){
        --n;
      }
    }
  }
  return n;
}
