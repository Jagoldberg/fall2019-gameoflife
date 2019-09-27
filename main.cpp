#include <iostream>
#include <fstream>
#include "ClassicMode.h"
#include "MirrorMode.h"
#include "DonutMode.h"

using namespace std;
int main(int argc, char **argv) {
  // Random vs. File configuration
  int inputChoice;
  cout << "Game of Life: " << endl;
  cout << "\tWorld Generation: " << endl;
  cout << "\t1: Random Assignment" << endl;
  cout << "\t2: Map File" << endl;
  cout << "Please select an option: " << endl;
  cin >> inputChoice;
  int r = 0;
  int c = 0;
  bool **thisGen;
  switch(inputChoice){
    case 1:
    {
      double d = 0.0;
      cout << "\tPlease provide the integer number of rows and columns, with a space between each value: " << endl;
      cin >> r >> c;
      cout << "\tPlease provide a decimal greater than 0 and less than or equal to 1: " << endl;
      cin >> d;
      thisGen = new bool* [r];
        for (int i = 0; i < r; ++i){
          thisGen[i] = new bool[c];
          for(int j = 0; j < c; ++j){
            //generate random number
            //if number < d, true, else false
            //myGrid[i][j] =
          }
        }
      break;
    }
    case 2:
    {
      string fileName;
      ifstream mapFile;
      string g;
      string s;
      cout << "\tPlease provide the name of the map file (including file extension): " << endl;
      cin >> fileName;
      mapFile.open(fileName);
      if (mapFile.is_open()){
        int count = 0;
        r = (int)mapFile.get();
        c = (int)mapFile.get();
        while (getline(mapFile,s)){
          g += s;
        }
      }
      thisGen = new bool* [r];
      for(int i = 0; i < r; ++i){
        thisGen[i] = new bool[c];
        for(int j = 0; j < c; ++j){
          switch(g.at(j)){
            case 'X':
            case 'x':
            {
              thisGen[i][j] = true;
              break;
            }
            case '-':
            {
              thisGen[i][j] = false;
              break;
            }
          }
          g.erase(j);
        }
      }
    }
      break;
    default:
    {
      cout << "invalid option, exiting program" << endl;
      break;
    }
  }
  //Boundary Mode (Classic v. Mirror v. Donut)
  cout << "\n\tGame Mode: " << endl;
  cout << "\t1: Classic Mode: " << endl;
  cout << "\t2: Mirror Mode: " << endl;
  cout << "\t3: Donut Mode: " << endl;
  cout << "Please select an option: " << endl;
  cin >> inputChoice;
  switch(inputChoice){
    case 1:
    {
      ClassicMode game;
      break;
    }/*
    case 2:
    {
      MirrorMode game;
      break;
    }
    case 3:
    {
      DonutMode game;
      break;
    }*/
    default:
      cout << "Invalid selection" << endl;
      break;
  }

  //Pause between generations
  //  "Enter" key or file output
  cout <<"\n\tPause Functionality: " << endl;
  cout <<"\t1: Pause between generations, press \"Enter\" to advance the simulation after viewing the new generation" << endl;
  cout <<"\t2: No pause between generations, simulation continues until stabilization, all generations outputted to a file" << endl;
  cout << "Please choose your preference: " << endl;
  cin >> inputChoice;
  bool pauseChoice;
  string OutFile;
  switch(inputChoice){
    case 1:
    {
      pauseChoice = true;
      break;
    }
    case 2:
    {
      pauseChoice = false;
      cout << "Provide a file name(with extension) for the output file: " << endl;
      cin >> OutFile;
    }
  }
  //Simulation


  //Exit cases (world becomes empty/stabilizes)

  return 0;
}
