/*
Name: Rayona Pryce
Creation: 09/17/2017
Version: 1_Red
*/
//Name: main ()
//Parameters: 1
//Return: 0 if successful
//Description: Prompts the user to enter their weight in lbs and height in ft,inches. The users weight is converted from lbs to kg and their height from ft,inches to meters. The users weight in kg and height in meters is then used to calculate the users BMI.
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      [#include <iostream>]                                                     03
//03      [#include <iomanip>]                                                      04
//04      [#include <string>]                                                       05
//05      [using namespace std;]                                                    06
//06      [int main() { ]                                                           07
//07      [int height_feet,height_inches;]                                          08
//08      [float meters,centimeters,lbs,kg,bmi;]                                    09
//09      /cout<<"Enter your height in feet: ";/                                    10
//10      /cin>> height_feet;/                                                      11
//11      /cout << "Enter your height in inches:";/                                 12
//12      /cin >> height_inches;/                                                   13
//13      [centimeters=(height_feet*12+height_inches)*2.54;]                        14
//14      [meters= centimeters/100;]                                                15
//15      /cout<< "  Height in Meters:"<<meters<<endl<<endl;/                       16
//16      /cout <<"Enter your Weight in Pounds:";/                                  17
//17      /cin >> lbs;/                                                             18
//18      [kg=lbs / 2.20462;]                                                       19
//19      /cout << " Weight in Kilograms:"<< kg<<endl<<endl;/                       20
//20      [bmi = kg/(meters*meters);]                                               21
//21      /cout<<fixed<<setprecision(2)<< "Your height is: "<<meters<<" m"<<endl;/  22
//22      /cout<<fixed<<setprecision(2)<< "Your weight is: "<<kg<<" kg"<<endl;/     23
//23      /cout<<fixed<<setprecision(2)<< "Your BMI is " << bmi<<'\n';}/            24
//24      (exit)


#include <iostream>
#include <iomanip>
// <iomanip> allows for the use of setprecision()
#include <string>
using namespace std;

int main ()
{
  int height_feet,height_inches;
  float meters,centimeters,lbs,kg,bmi;

// User height
  cout <<"Enter your height in feet: ";
  cin >> height_feet;
  cout << "Enter your height in inches:";
  cin >> height_inches;
// Convert User Height to Meters
  centimeters=(height_feet*12+height_inches)*2.54;
  meters= centimeters/100;
  cout<< " Height in Meters:"<<meters<<endl<<endl;

//User Weight
  cout << "Enter your Weight in Pounds:";
  cin >> lbs;
//Convert User Weight from lbs to kg
  kg=lbs / 2.20462;
  cout << " Weight in Kilograms:"<< kg<<endl<<endl;

//BMI Calculation
  bmi = kg/(meters*meters);


//Display User Information fixed to two decimal spaces
 cout<<fixed<<setprecision(2)<< "Your height is: "<<meters<<" m"<<endl;
 cout<<fixed<<setprecision(2)<< "Your weight is: "<<kg<<" kg"<<endl;
 cout<<fixed<<setprecision(2)<< "Your BMI is " << bmi<<'\n';

  return 0;
}
