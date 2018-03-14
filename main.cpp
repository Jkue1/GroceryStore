// Author: Joshua Kue
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
  string stuff;  
  vector< string > list;
  //string list[5]; //array of 5 strings
  int numItems = 1;
  char input;

  

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

if (list.empty())
{
    cout<<"No items to buy!\n";
}

else 
{
    cout<<"==ITEMS TO BUY==\n";
    for (int i=0; i<list.size(); i++)
    {
       
       cout<<numItems++<<" "<<list[i]<<endl;
    }
}

  return 0;
}
