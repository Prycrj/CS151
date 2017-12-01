#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

//Name: guessNumber()
//Parameters: 4
//Return: none
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Declare& Initialize variables needed                                      03
//03      Generate random number for user to guess                                  04
//04      While user guesses incorrectly and has more chances, prompt another guess 05
//05      If user guesses correctly, display "You Guessed it!"                      06
//06      Store user guesses into log array                                         07
//07      As user guesses incorrectly, guide user telling 'too high' or 'too low'   08
//08      If user runs out of chances, display correct value                        09
//09      Print elements of the array [user guesses] with proper spacing            10
//10      (exit)


void guessNumber(int min, int max, int limit, int log[])
{
  int guess,i=0,count,domain;
   domain=max-min+1;//used to ensure random number is between min and max.

 srand(time(0));
 int ran1= rand() % domain + min ;
// cout<<endl<<"Rand is:"<<ran1<<endl  --- Used for Testing Game

 while (guess!=ran1 && limit>0)
 {
    cout<<endl<<"Take Your Best Guess: ";
    cin>>guess;

    if (guess == ran1)
    { cout<< "You Guessed It! :) ";  }

    log[i]=guess; //stores user input[guess] into initialized array.
    i++; //increments array index for each following input.
    limit--; //decreases chances for user guesses while condition is met.

    if (guess>ran1 && limit>0)
     {
     cout << "Too high! Try again.\n"<<limit<<" guesses left"<<endl;
     }
    if (guess<ran1 && limit>0)
     {
     cout << "Too low! Try again.\n"<<limit<<" guesses left"<<endl;
     }
 }
  if (guess!=ran1 && limit==0)
    {
    cout<<"You're out of Guesses"<<endl;
    cout<<"The number is: "<<ran1;
    }

  count=0;
  cout<<"\n[";
  while(count<i) //While array has values past index '0'
  {
    cout <<log[count]; //Print stored user inputs
      if(count < i - 1)// As long as the value is not last, the value will be followed by a ','
      {
        cout<<",";
      }
      if(count == i - 1)//The last value will be followed by a closing ']'
      {
        cout<<"]";
      }
      count++;//Increment until all array values have been printed
   }
}
