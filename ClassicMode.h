#include <iostream>

using namespace std;

class ClassicMode
{
public:
  ClassicMode(); //default constructor
  ~ClassicMode();//destructor

  int neighbors(int row, int col);
  void createGrid(int r, int c, double d, string l);

  bool **myGrid;


};
