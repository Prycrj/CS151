/*
//Name: Rayona Pryce
/Creation: 11/25/2017
//Version: 5_Red
*/
//Name: main ()
//Parameters: 0
//Return: 0 if successful
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Initialize variables needed                                               03
//03      Prompt User to input 2 numbers                                            04
//04      Calculate Min&Max of user inputs                                          05
//05      Prompt User to input limit                                                06
//06      Send max, min, limit, and initialized array to guessNumber function       07
//07      (exit)                                                                    08


#include "A_5.h"

int main (){
 int a, b,max,min,limit,log[100];
  //1.declare an int array with a size of hundred (100).

  //2.prompt the user to enter two (2) integers for min and max.
  cout<< "    Number Guessing Game\n"<<"*****************************"<<endl;
  cout<<endl<< "Enter two numbers :";
  cin>>a>>b;

  if(a>b){
    max=a;
    min=b;
  }
  else{
    max=b;
    min=a;
  }
 cout<<endl;
 cout<<"Think u can guess what number im thinking of between "<<min<<" & "<<max<<"?";
 cout<<endl;


//3.prompt the user to enter a integer for limit.
  cout<<"\nEnter a limit: ";
  cin>>limit;


//4.call GuessNumber() with the integer inputs and the array as the arguments.
guessNumber(min,max,limit,log);
  return 0;
}
