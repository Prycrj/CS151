/*
//Name: Rayona Pryce
/Creation: 11/2/2017
//Version: 4_Red
*/
//Name: main ()
//Parameters: 0
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Declare Variables needed (base1, base2, base3)                            03
//03      /cout<<"Enter Three Bases";/                                              04
//04      Receive 3 inputs                                                          05
//05      srand( (unsigned) time (0));                                              06
//06      Generate Ran1 value between 1 and 99                                      07
//07      Generate Ran2 value between 1 and 99                                      08
//08      /cout<<ran1<<" in base "<<base1<<" is ";/                                 09
//09      send values of ran 1 and base 1 to baseConvert and display result         10
//10      /cout<<ran1<< " in base "<<base2<<" is ";/                                11
//11      send values of ran 1 and base 2 to baseConvert and display result         12
//12      /cout<<ran1<< " in base "<<base3<<" is ";/                                13
//13      send values of ran 1 and base 3 to baseConvert and display result         14
//14      /cout<<ran2<<" in base "<<base1<<" is ";/                                 15
//15      send values of ran 2 and base 1 to baseConvert and display result         16
//16      /cout<<ran2<< " in base "<<base2<<" is ";/                                17
//17      send values of ran 2 and base 2 to baseConvert and display result         18
//18      /cout<<ran2<< " in base "<<base3<<" is ";/                                19
//19      send values of ran 2 and base 3 to baseConvert and display result         20
//20      (exit)

#include "A4.h"


int main()
{
  int base1, base2, base3;

  cout<< "Enter Three Bases";
  cin>>base1>>base2>>base3;

// srand Generates random number based on current time in seconds, and unsigned makes it so random numbers are >0.

 srand( (unsigned) time (0));
 int ran1= (rand() % 99 +1);
 int ran2= (rand() % 99 +1);

 cout<<ran1<<" in base "<<base1<<" is ";
 baseConvert(ran1,base1);
 cout << endl;
 cout<<ran1<< " in base "<<base2<<" is ";
 baseConvert(ran1,base2);
 cout << endl;
 cout<<ran1<< " in base "<<base3<<" is ";
 baseConvert(ran1,base3);
 cout << endl;

 cout<<ran2<< " in base "<<base1<<" is ";
 numberGenerator(ran2,base1);
 cout << endl;
 cout<<ran2<< " in base "<<base2<<" is ";
 numberGenerator(ran2,base2);
 cout << endl;
 cout<<ran2<< " in base "<<base3<<" is ";
 numberGenerator(ran2,base3);

  return 0;
}
