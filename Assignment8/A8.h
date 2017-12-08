#include <iostream>
#include <string>

using namespace std;

//Name: ComboWithout ()
//Parameters: 0
//Return: none
//Flowchart:
//Label   Task                                                                               Goto
//01      (start)                                                                            02
//02      Initialize count to zero                                                           03
//03      Initialize char array to the alphabet                                              04
//04      Innermost if statement makes sure there are 10 combinations on the line            05
//05      Display combination of letters while j,k, and i are less than 26                   06
//07      Display count for verification                                                     07
//08      (exit)

void ComboWithout()
{
  int count=0;
 char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 for(int i=0; i<26; i++)
 {
   for(int j= i+1; j<26; j++)
   {
     for(int k= j+1; k<26; k++)
     {
       if(count%10==0 && count!=0)
       {
         cout<<endl;
       }
       cout<<alphabet[i]<<alphabet[j]<<alphabet[k]<<" ";
       count++;
     }
   }
 }
  cout<<endl<<count;
}
