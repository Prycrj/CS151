#include<iostream>
#include<string>
#include<cmath>

#ifndef A3_H
#define A3_H
//Name: maximum ()
//Parameters: 5
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Compare x against all other variables                                     03
//03      If x is greatest value, return x                                          04
//04      Compare y against all other variables                                     05
//05      If y is greatest value, return y                                          06
//06      Compare z against all other variables                                     07
//07      If z is greatest value, return z                                          08
//08      Compare w against all other variables                                     09
//09      If w is greatest value, return w                                          10
//10      Compare v against all other variables                                     11
//11      If v is greatest value, return v                                          12
//01      (exit)

float maximum(float& x,float& y, float& z, float& w, float& v)
{
  if((x>=y)&&(x>=z)&&(x>=w)&&(x>=v))
  {
    return x;
  }
  else if ((y>=x)&&(y>=z)&&(y>=w)&&(y>=v))
  {
    return y;
  }
  else if ((z>=x)&&(z>=z)&&(z>=w)&&(z>=v))
  {
    return z;
  }
  else if ((w>=x)&&(w>=z)&&(w>=w)&&(w>=v))
  {
    return w;
  }
  else
  {
    return v;
  }
}

//Name: minimum ()
//Parameters: 5
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Compare x against all other variables                                     03
//03      If x is least value, return x                                             04
//04      Compare y against all other variables                                     05
//05      If y is least value, return y                                             06
//06      Compare z against all other variables                                     07
//07      If z is least value, return z                                             08
//08      Compare w against all other variables                                     09
//09      If w is least value, return w                                             10
//10      Compare v against all other variables                                     11
//11      If v is least value, return v                                             12
//01      (exit)

float minimum(float& x,float& y, float& z, float& w, float& v)
{
  if((x<=y)&&(x<=z)&&(x<=w)&&(x<=v))
  {
    return x;
  }
  else if ((y<=x)&&(y<=z)&&(y<=w)&&(y<=v))
  {
    return y;
  }
  else if ((z<=x)&&(z<=z)&&(z<=w)&&(z<=v))
  {
    return z;
  }
  else if ((w<=x)&&(w<=z)&&(w<=w)&&(w<=v))
  {
    return w;
  }
  else
  {
    return v;
  }
}

//Name: swapbyVal()
//Parameters: 2
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Assign tmp variable as x                                                  03
//03      Assign x variable as y                                                    04
//04      Assign y value as tmp                                                     05
//05      (exit)
void swapbyVal(float & x, float & y)
{
  float tmp=x;
  x=y;
  y=tmp;
}
//Name: median ()
//Parameters: 5
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Compare x against all other variables                                     03
//03      As long as x is greater, swap value with variable to the right            04
//04      Compare y against all other variables                                     05
//05      As long as y is greater, swap value with variable to the right            06
//06      Compare z against all other variables                                     07
//07      As long as z is greater,swap value with variable to the right             08
//08      Compare w against all other variables                                     09
//09      As long as w is greater, swap value with variable to the right            10
//10      Compare v against all other variables                                     11
//11      As long as v is greater, swap value with variable to the right            12
//12      With values now sorted in order, return median value 'z'                  13
//13      (exit)

float median(float& x,float& y, float& z, float& w, float& v)
{
  if (x > y)
  {
  swapbyVal(x,y);
  }
  if (x > z)
  {
  swapbyVal(x,z);
  }
  if (x > w)
  {
  swapbyVal(x,w);
 }
 if (x > v)
  {
  swapbyVal(x,v);
  }
 if (y > z)
  {
  swapbyVal(y,z);
  }
if (y > w)
  {
  swapbyVal(y,w);
  }
  if (y > v)
  {
  swapbyVal(y,v);
  }
 if (z > w)
  {
 swapbyVal(z,w);
  }
if (z > v)
  {
 swapbyVal(z,v);
  }
  if (w > v)
  {
  swapbyVal(w,v);
  }
return z;
}
//Name: thirdQuartile ()
//Parameters: 5
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Send values to median function                                            03
//03      With values now sorted in order, return 'w' value                         04
//04     (exit)

float thirdQuartile(float& x,float& y, float& z, float& w, float& v)
{
 median(x,y,z,w,v);
 return w;

}
//Name: firstQuartile ()
//Parameters: 5
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Send values to median function                                            03
//03      With values now sorted in order, return 'y' value                         04
//04     (exit)


float firstQuartile(float& x,float& y, float& z, float& w, float& v)
{
  median(x,y,z,w,v);
  return y;
}

#endif//A3_H
