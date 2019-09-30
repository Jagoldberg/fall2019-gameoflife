#include <iostream>

using namespace std;

class MirrorMode
{
public:
  MirrorMode(); //default constructor
  ~MirrorMode();//destructor

  int neighbors(int row, int col, int rowSize, int colSize, bool**grid);

};
