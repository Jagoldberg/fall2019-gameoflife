#include <iostream>

using namespace std;

class Grid{
public:
  Grid(); //default constructor
  Grid(int r, int c, double d, string l); //overloaded constructor
  ~Grid();//destructor


  bool **myGrid;
};
