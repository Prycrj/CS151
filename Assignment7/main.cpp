/*
//Name: Rayona Pryce
/Creation: 12/7/2017
//Version: Homework7_Red
*/
//Name: main ()
//Parameters: 0
//Return: 0 if successful
//Flowchart:
//Label   Task                                                                               Goto
//01      (start)                                                                            02
//02      Initialize array to 10 elements and declare min and max                            03
//03      Prompt user for two distinct numbers                                               04
//04      Set Min and Max from user input                                                    05
//05      Send array, size, and imputs to randomnumbers, printarray and sort functions       06
//06      Display array before and after sending to sort function                            07
//07      (exit)


#include <iostream>
#include <string>

using namespace std;
#include "A7.h"


int main()
{
 int data[10],a,b,max,min;

 cout<< "Enter Two Distinct Numbers: "<<endl;
 cin>>a>>b;
   if(a>b)
   {
    max=a;
    min=b;
  }
  else
  {
    max=b;
    min=a;
  }

 cout<<endl;
 RandomNumbers(data,10,min,max); //perform the task of the main function of Random Numbers.
 cout<< "-----------Random Numbers----------"<<endl;
 cout<<endl;
 PrintArray(data,10);
 cout<<endl;
 cout<< "--------Numbers in Descending Order-------"<<endl;
 sort(data,10); //call Sort() with the inputs, the array, and its size as the arguments.
 cout<<endl;
 PrintArray(data,10); //call Sort() with the inputs, the array, and its size as the arguments.
  return 0;
}
