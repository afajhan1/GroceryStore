#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  string items;
  do 
  {
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if(( input == 'A' ) || (input == 'a'))
  {
  cout<<"What is the item?\n";
  cin>>items;
  
  if(numItems<5)
  { 
       list[numItems]=items;
       numItems++;

  }else
  {

      cout<<"You'll need a bigger list!\n";
  
  }
 
 
 }




}while(input!='q' && input!='Q' );
 cout<<"==ITEMS TO BUY==";
 for(int numItems=0; numItems<5; numItems++)
 {

   cout<<endl<<numItems+1 << " ";

   if(list[numItems]!="")
   {
       cout<<list[numItems];
       }
       }cout<<endl;
  return 0;
}
