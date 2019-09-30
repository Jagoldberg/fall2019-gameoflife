#include <iostream>

using namespace std;

class DonutMode
{
public:
  DonutMode(); //default constructor
  ~DonutMode();//destructor

  int neighbors(int row, int col, int rowSize, int colSize, bool**grid);

};
