#include <iostream>

using namespace std;

class ClassicMode
{
public:
  ClassicMode(); //default constructor
  ~ClassicMode();//destructor

  int neighbors(int row, int col, int rowSize, int colSize);

  bool **grid;

};
