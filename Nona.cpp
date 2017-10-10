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


#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


//PI() returns pi to at least 8 digits
double pi()
{
  return 3.14159265;
}

//toRadian() returns deg converted to radian,
double toRadian(double degrees)
{
  float answer = degrees*(pi()/180);
  return answer;
}

//toDegrees()returns rad converted to degrees
double toDegrees(double radians)
{
  double answer = radians*(180/pi());
  return answer;
}

//toRectangular() stores the conversion of polar coordinates (magnitude, angle) into rectangular coordinates (x, y).
void toRectangular(double magnitude,double angle, double& x, double& y)
{
  angle= toRadian(angle);
  x= magnitude*cos (angle);
  y= magnitude*sin (angle);
}

//toPolar stores the conversion of rectangular coordinates (x, y) into polar coordinates (magnitude, angle),
void toPolar(double& magnitude,double& angle, double x,double y)
{
  magnitude = sqrt((x*x) + (y*y));
  angle = toDegrees(atan2(y,x));
}

//add stores the sum of vector, 1 (mag1, ang1) and vector 2 (mag2, ang2) into vector 3 (mag3, ang3),
double add(double mag1,double ang1, double mag2, double ang2, double& mag3, double& ang3)
{
   // Takes vector values(mag 1, mag2,ang 1,ang 2.) Sends to -->toRectangular to be converted into rectangular form (mag1,ang1 to x1,y1) for addition.(mag2,ang2 to x2,y2). Result of addition is new Mag3,Ang3. Sends to -->toPolar to display Polar Coordinates.
  double x1,y1,x2,y2;
  toRectangular(mag1,ang1,x1,y1);
  toRectangular(mag2,ang2,x2,y2);
  mag3=x1+y1;
  ang3=x2+y2;
  toPolar(mag3,ang3,mag3,ang3);
  return 0;

}

//Subtract stores the difference of vector 2 (mag2, ang2) from vector 1 (mag1, ang1) into vector 3 (mag3, ang3)
double subtract(double mag1,double ang1,double mag2,double ang2,double& mag3,double& ang3)
{
  // Takes vector values(mag 1, mag2,ang 1,ang 2.) Sends to -->toRectangular to be converted into rectangular form (mag1,ang1 to x1,y1) for subtraction.(mag2,ang2 to x2,y2)Result of subtraction is new Mag3,Ang3. Sends to -->toPolar to display Polar Coordinates.
 double x1,x2,y1,y2;
  toRectangular(mag1,ang1,x1,y1);
  toRectangular(mag2,ang2,x2,y2);
  mag3=x2-x1;
  ang3=y2-y1;
  toPolar(mag3,ang3,mag3,ang3);
  return 0;
}

//In the main function,

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
