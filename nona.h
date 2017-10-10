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
//02      [return 3.14159265;]                                                      03
//03      (exit)

//Name: toRadian()
//Parameters: degrees
//Return: float
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                    02
//02      [answer = degrees*(pi()/180);]                                             03
//03      [return answer;]                                                           04
//04      (exit)

//Name: toDegrees()
//Parameters: radians
//Return: float
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                    02
//02      [answer = radians*(180/pi());]                                             03
//03      [return answer;]                                                           04
//04      (exit)

//Name: toRectangular()
//Parameters: magnitude,angle,x,y
//Return: none
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                    02
//02      [angle= toRadian(angle);]                                                  03
//03      [x= magnitude*cos (angle);]                                                04
//04      [y= magnitude*sin (angle);]                                                05
//05      (exit)

//Name: toPolar()
//Parameters: magnitude,angle,x,y
//Return: none
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                    02
//02      [magnitude = sqrt((x*x) + (y*y));]                                         03
//03      [angle = toDegrees(atan2(y,x));]                                           04
//04      (exit)

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
//08      (exit)

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
//08      (exit)
