// Author: Joshua Kue
#include<iostream>
#include<string>
using namespace std;


int main()
{


  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
string stuff;


do
{


  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
cin>> input;  
  
  if (input == 'a' || input == 'A')
  {cout<<"What is the item?\n";
  cin>> stuff;
  if ( numItems > 4)
  {cout<<"You'll need a bigger list!\n";}
  else {list[numItems] = stuff; numItems = numItems + 1;}
}
 

}
while (!(input == 'q' || input == 'Q'));

cout<<"==ITEMS TO BUY==\n";
    for (int num= 0; num < 5; num++)
    {cout<<num+1<< " " <<list[num]<<endl;}

  return 0;
}
