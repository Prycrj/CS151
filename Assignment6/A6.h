#ifndef A6_h
#define A6_h

#include <string>
#include <fstream>

using namespace std;

//Name: copy()
//Parameters: 1
//Return: none
//Flowchart:
//Label   Task                                                                     Goto
//01      (start)                                                                   02
//02      Open user selected file for Reading                                       03
//03      Open new file for writing                                                 04
//04      Keep reading until reaching the end of the file                           05
//05      Copy read content to "duplicated.txt"                                     06
//06      Close File                                                                07
//07      (exit)

void copy(string filename)
{
  ifstream fin;
  fin.open(filename);

  ofstream fout;
  fout.open("duplicated.txt");
  char ch;

  while(!fin.eof())
  {
    fin.get(ch);
    fout<<ch;
  }
  fin.close();
}
#endif 
