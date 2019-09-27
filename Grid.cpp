#include "Grid.h"

using namespace std;


Grid::Grid(int r, int c, double d, string l){
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
