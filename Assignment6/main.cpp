/*
//Name: Rayona Pryce
/Creation: 11/25/2017
//Version: Homework6_Red
*/
//Name: main ()
//Parameters: 0
//Return: 0 if successful
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Initialize variables needed                                               03
//03      Prompt user to input file to copy                                         04
//04      Send user input to copy function                                          05
//05      (exit)

#include <iostream>
#include "A6.h"

using namespace std;


int main()
{
 string tocopy;

  cout << "What File Would You Like to Copy? ";
  cin >> tocopy;

  copy(tocopy);
  return 0;
}
