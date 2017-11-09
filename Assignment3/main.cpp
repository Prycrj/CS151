/*
//Name: Rayona Pryce
/Creation: 10/12/2017
//Version: 3_Red
*/
//Name: main ()
//Parameters: 1
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Declare Variables needed (float x, y, z, w, v)                            03
//03      Prompt user to enter 5 numbers                                            04
//04      Read in User's 5 inputs                                                   05
//05      /cout<< "The Maximum is:"<<maximum(x,y,z,w,v)<<endl;/                     06
//06      /cout<<"The Third Quartile is:"<<thirdQuartile(x,y,z,w,v)<<endl;/         07
//07      /cout<<"The Median is:"<<median(x,y,z,w,v)<<endl;/                        08
//08      /cout<<"The First Quartile is:"<<firstQuartile(x,y,z,v,w)<<endl;/         09
//09      /cout<<"The Minimum is:"<<minimum(x,y,z,w,v);/                            10
//10      (exit)

#include "A3.h"
#include<iostream>
using namespace std;
int main()
{
  float x,y,z,w,v;

cout<< "Enter 5 numbers:"<<endl;
cin>>x>>y>>z>>w>>v;

cout<< "The Maximum is:"<<maximum(x,y,z,w,v)<<endl;
cout<<"The Third Quartile is:"<<thirdQuartile(x,y,z,w,v)<<endl;
cout<<"The Median is:"<<median(x,y,z,w,v)<<endl;
cout<<"The First Quartile is:"<<firstQuartile(x,y,z,v,w)<<endl;
cout<<"The Minimum is:"<<minimum(x,y,z,w,v);

return 0;
}
