/*
//Name: Rayona Pryce
/Creation: 11/27/2017
//Version: TakeHome_3
*/


#include <iostream>
#include <string>

using namespace std;

//#1
char wayOne[]="Initial";
char wayTwo[]={'I','n','i','t','i','a','l'};


//#2
int main()
{
while(1)
{
  cout<< "Why?\n";
return 0;
}


//#3
int main()
{
  int sum = 0;
	cout << "Enter a number: ";
	cin >> n;
	while(n > 1)
  {
		sum += n * n;
		n--;
	}
	cout << "\nSum: " << sum << endl;
return 0;
}


//#4
int main()
{
char str[]= {'A','D','E','R'};
cout<<str[3]<<str[2]<<str[0]<<str[1]<<" "<<str[1]<<str[0]<<str[3]<<str[2];
 return 0;
}

//#5
int main()
{
string str;
cout<< "enter a string";
cin>>str;
//forwards
for (int i = 0; i < str.length(); ++i)
    cout << str[i];
// index-based reverse loop
/for (int i = str.length() - 1; i >= 0; --i)
/    cout << str[i];
}


//#6
int main()
{
int i = 1, n;
int count = 1;
cout<<"Enter a number";
cin>>n;

while (i<n)
{
  if (n%i==0)
  {  ++count;
    //cout <<i<<endl;
   }
    ++
   }

cout<<count;
return 0;
}

//#7
int main()
{
string userInput;
int i = 0, n;
n= userInput.length();
cout << "Enter a string: "<<endl;
cin >> userInput;
cout <<endl;
while (1)
{
  if (userInput[i]>='a' && userInput[i]<='z')
  {
    cout<< "Enter a string:";
    cin>> userInput;
  }
  else if (userInput[i]>='A' && userInput[i]<='Z')
{
   cout<< "Sorry, lowercase letters only!\n"<<"Enter a string:";
   cin>> userInput;
}
}
return 0;
}

//#8







//Extra Credit


bool isPalindrome(string str)
{
  string forward,backward;
//forwards
for (int i = 0; i < str.length(); ++i)
{
    //cout << str[i];
    forward=str[i];
}
//index-based reverse loop
 for (int i = str.length() - 1; i >= 0; --i)
 {
     //cout << str[i];
     backward=str[i];
}

if(forward==backward)
{
  cout<< "true";
}
else
{
  cout<<"false";
}
}


int main()
{
string str;
cout<< "enter a string";
cin>>str;

isPalindrome(str);

return 0;
}
