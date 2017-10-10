/*
Name: Rayona Pryce
Creation: 10/04/2017
Version: 2_Red
*/
//Name: main ()
//Parameters: 1
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Declare Variables needed (mag1,mag2,mag3,ang1,ang2,ang3,x,y)              03
//03      Prompt user to enter First Vector  (mag1,ang1)                            04
//04      Prompt user to enter Second Vector (mag2,ang2)                            05
//05      Display 1st Polar Coordinate       (mag1,ang1)                            06
//06      Send first vector (mag1,ang1)--> toRectangular function                   07
//07      toRectangular function changes (mag1,ang1)--> (x,y)                       08
//08      Send (x,y) -->toPolar function                                            09
//09      toPolar function changes (x,y)--> polar form                              10
//10      Display 1st Rectangular Coordinate (x,y)                                  11
//11      Display 2nd Polar Coordinate     (mag2,ang2)                              12
//12      Send second vector (mag2,ang2)--> toRectangular function                  13
//13      toRectangular function changes (mag2,ang2)--> (x,y)                       14
//14      Send (x,y) -->toPolar function                                            15
//15      toPolar function changes (x,y)--> polar form                              16
//16      Display Second Rectangular Coordinate (x,y)                               17
//17      Send Vectors 1 & 2 to add function                                        18
//18      Add function takes in (mag1,mag2,ang1,ang2) and returns (mag3,ang3)       19
//19      Display result of addition (mag3,ang3) in polar form                      20
//20      Send result (mag3,ang3)--> toRectangular function for rectangular coords. 21
//21      Display resulting mag3,ang3 in rectangular form                           22
//22      Send Vectors 1 & 2 to subtract function                                   23
//23      Subtract function takes in (mag1,mag2,ang1,ang2) and returns (mag3,ang3)  24
//24      Display result of subtraction (mag3,ang3) in polar form                   25
//25      Send result of subtraction(mag3,ang3) -->toRectangular function           26
//26      Display resulting mag3,ang3 in rectangular form                           27
//27      Send Vectors 1 & 2 to subtract function                                   28
//28      Subtract function takes in (mag1,mag2,ang1,ang2) and returns (mag3,ang3)  29
//29      Send result of subtraction(mag3,ang3) -->toRectangular function           30
//30      Display resulting mag3,ang3 in rectangular form                           31
//31      (exit)

#include "nona1.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

//Name: Main()
//Parameters: none
//Return: 0 if successful

int main ()
{
double mag1,mag2,mag3,ang1,ang2,ang3,x,y;


//prompt the user to enter two (2) vectors in polar coordinates with the angle in degrees
cout<<"Enter the First Vector:"<<endl;
cin>>mag1>>ang1;
cout<<endl<<"Enter the Second Vector:"<<endl;
cin>>mag2>>ang2;'\n';

//print the vectors, their sum and differences in both polar and rectangular coordinates.

//Display V1
cout<< fixed << setprecision(1);
cout<<"v1:\n"<<"Polar Coordinates:"<<"("<<mag1<<","<<ang1<<")";
toRectangular(mag1,ang1,x,y);
toPolar(mag1,ang1,x,y);
cout<<endl<<"Rectangular Coordinates:"<<"("<<x<<","<<y<<")";

//Display V2
cout<<endl<<"v2:\n"<<"Polar Coordinates:"<<"("<<mag2<<","<<ang2<<")";
toRectangular(mag2,ang2,x,y);
toPolar(mag2,ang2,x,y);
cout<<endl<<"Rectangular Coordinates:"<<"("<<x<<","<<y<<")";

//Display V1 + V2
add(mag1,ang1,mag2,ang2,mag3,ang3);
cout<<endl<<"v1+v2:\n"<<"Polar Coordinates:"<<"("<<mag3<<","<<ang3<<")";
toRectangular(mag3,ang3,x,y);
cout<<endl<<"Rectangular Coordinates:"<<"("<<x<<","<<y<<")";

//Display V2 - V1
subtract(mag2,ang2,mag1,ang1,mag3,ang3);
cout<<endl<<"v2-v1:\n"<<"Polar Coordinates:"<<"("<<mag3<<","<<ang3<<")";
toRectangular(mag3,ang3,x,y);
cout<<endl<<"Rectangular Coordinates:"<<"("<<x<<","<<y<<")";

//Display V1 - V2
subtract(mag1,ang1,mag2,ang2,mag3,ang3);
cout<<endl<<"v1-v2:\n"<<"Polar Coordinates:"<<"("<<mag3<<","<<ang3<<")";
toRectangular(mag3,ang3,x,y);
cout<<endl<<"Rectangular Coordinates:"<<"("<<x<<","<<y<<")";

return 0;
}
