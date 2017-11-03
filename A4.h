#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

//Name: numberGenerator()
//Parameters: 2
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Check if 'n' input is positive                                            03
//03      Redefine n to be half of itself                                           04
//04      Send new n value (n/2) to numberGenerator                                 05
//05      [cout<< n % base;]                                                        06
//06      (exit)                                                                    07

void numberGenerator(int n, int base)
{
  if (n > 0)
  { n = n / 2;
 numberGenerator(n,base); }
  cout << n % base;
}

//Name: baseConvert()
//Parameters: 2
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Check if 'n' input is between 2 and 9                                     03
//03      If so, send 'n' and 'base' inputs to numberGenerator                      04
//04      (exit)



void baseConvert(int n, int base)
{
  if (base >= 2 && base <= 9)
  {numberGenerator(n, base); }
}
