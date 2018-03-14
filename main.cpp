// Author: Joshua Kue
#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{

  vector <string> list;
  //string list[5]; //array of 5 strings
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
  {
    cout<<"What is the item?\n";
    cin>>stuff; 
    list.push_back(stuff);
  }
 
}
while (!(input == 'q' || input == 'Q'));

cout<<"==ITEMS TO BUY==\n";
for (int i=0; i<list.size(); i++)
{
cout<<list[stuff];
}

  return 0;
}
