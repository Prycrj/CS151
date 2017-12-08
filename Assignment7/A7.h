#include <iostream>
#include <string>
#include <ctime>

using namespace std;

//Name: RandomNumbers ()
//Parameters: 4
//Return: true
//Flowchart:
//Label   Task                                                                               Goto
//01      (start:data[], size, min, max)                                                     02
//02      Declare random variable                                                            03
//03      Starting from first index, produce 10 numbers between min and max and fill array   04
//04      Return true                                                                        05
//05     (exit)

bool RandomNumbers(int data[], int size, int min, int max)
{
  srand(time(0));
  int random ;
  int domain=max-min+1;
  for(int i=0; i<size; i++)
  {
    random= rand() % domain + min ;
    data[i]=random;
  }
  return true;
  }

//Name: sort()
//Parameters: 2
//Return: 0 if successful
//Flowchart:
//Label   Task                                                                               Goto
//01      (start:data[],size)                                                                02
//02      Declare int tmp                                                                    03
//03      Innermost nested loop swaps array variables while i<j                              04
//04      Continues incrementing through loop while j<size                                   05
//05      Continues incrementing through loop while i<size                                   06
//06     (exit)

void sort(int data[], int size)
{
 int tmp;
  for(int i=0; i<size; i++)
  {
    for(int j= i+1; j<size; j++)
    {
      if (data[i]<data[j])
      {
        tmp=data[j];
        data[j]=data[i];
        data[i]=tmp;
      }
    }
  }

}
//Name: PrintArray()
//Parameters: 2
//Return: 0 if successful
//Flowchart:
//Label   Task                                                                               Goto
//01      (start:data[],size)                                                                02
//02      Print opening bracket "["                                                          03
//03      Innermost If statement makes sure there is no comma after last element             04
//04      Else statement prints elements of data array with commas between them              05
//05      Continues incrementing through array while < size                                  06
//06      Pring closing bracket "]"                                                          07
//07     (exit)
void PrintArray(int data[], int size)
{
  cout<<"[";
  for(int i=0; i<size; i++)
  {
   if(i!=size-1)
   {
    cout<<data[i]<<",";
   }
   else
   {
     cout<<data[i];
   }
  }
  cout<<"]"<<endl;
}
