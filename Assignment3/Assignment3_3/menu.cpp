
#include<iostream>
using namespace std;


int menu()
{
  int choice;

  cout<<"\n0.exit"<<endl;
  cout<<"\n1.accept radius and height"<<endl;
  cout<<"\n2.display volume"<<endl;
  cout<<"\n3.get radius"<<endl;
  cout<<"\n4.get height"<<endl;
  cout<<"\n5.get volume"<<endl;
  cout<<"\nenter choice\n"<<endl;
  cin>>choice;

  return choice; 
}