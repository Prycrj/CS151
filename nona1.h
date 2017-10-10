/*
Name: Rayona Pryce
Creation: 10/09/2017
Version: 2_Red
*/

//Name: pi ()
//Parameters: none
//Return: 3.14159265
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      (exit:  3.14159265)                                                       03

//PI() returns pi to at least 8 digits
double pi()
{
  return 3.14159265;
}

//Name: toRadian()
//Parameters: double degrees
//Return: double
//Flowchart:
//Label   Task                                                                     Goto
//01      (start: degrees)                                                          02
//02      [answer= degrees*(pi()/180);]                                             03
//03      [return answer;]                                                           04
//04      (exit)

//toRadian() returns deg converted to radian,
double toRadian(double degrees)
{
  float answer = degrees*(pi()/180);
  return answer;
}


//Name: toDegrees()
//Parameters: double radians
//Return: double
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                    02
//02      [answer = radians*(180/pi());]                                             03
//03      [return answer;]                                                           04
//04      (exit)

//toDegrees()returns rad converted to degrees
double toDegrees(double radians)
{
  double answer = radians*(180/pi());
  return answer;
}

//Name: toRectangular()
//Parameters: double magnitude, double angle, double& x, double& y
//Return: none
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                    02
//02      [angle= toRadian(angle);]                                                  03
//03      [x= magnitude*cos (angle);]                                                04
//04      [y= magnitude*sin (angle);]                                                05
//05      (exit)

//toRectangular() stores the conversion of polar coordinates (magnitude, angle) into rectangular coordinates (x, y).
void toRectangular(double magnitude,double angle, double& x, double& y)
{
  angle= toRadian(angle);
  x= magnitude*cos (angle);
  y= magnitude*sin (angle);
}

//Name: toPolar()
//Parameters: double& magnitude, double& angle, double x,double y
//Return: none
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                    02
//02      [magnitude = sqrt((x*x) + (y*y));]                                         03
//03      [angle = toDegrees(atan2(y,x));]                                           04
//04      (exit)

//toPolar stores the conversion of rectangular coordinates (x, y) into polar coordinates (magnitude, angle),
void toPolar(double& magnitude,double& angle, double x,double y)
{
  magnitude = sqrt((x*x) + (y*y));
  angle = toDegrees(atan2(y,x));
}


//Name: add()
//Parameters: mag1,ang1,mag2,ang2,mag3,ang3
//Return: 0 if successful
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                    02
//02      [double x1,y1,x2,y2;]                                                      03
//03      [toRectangular(mag1,ang1,x1,y1);]                                          04
//04      [toRectangular(mag2,ang2,x2,y2);]                                          05
//05      [mag3=x1+x2;]                                                              06
//06      [ang3=y1+y2;]                                                              07
//07      [toPolar(mag3,ang3,mag3,ang3);]                                            08
//08      (exit: 0)

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
//Name: subtract()
//Parameters: mag1,ang1,mag2,ang2,mag3,ang3
//Return: 0 if successful
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                    02
//02      [double x1,y1,x2,y2;]                                                      03
//03      [toRectangular(mag1,ang1,x1,y1);]                                          04
//04      [toRectangular(mag2,ang2,x2,y2);]                                          05
//05      [mag3=x2-x1;]                                                              06
//06      [ang3=y2-y1;]                                                              07
//07      [toPolar(mag3,ang3,mag3,ang3);]                                            08
//08      (exit: 0)

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
