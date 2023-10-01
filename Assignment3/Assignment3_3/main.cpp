#include<iostream>
#include"./cylinder.h"

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

int main()
{  
  Cylinder V1;

  int choice;

  while((choice=menu())!=0)
{
  switch(choice)
  {  
     
  case 1: V1.acceptVol();
          //V1.displayVol();
          break;

  case 2: V1.printVolume();
         break;

  case 3: V1.getRadius();
          V1.setRadius(10);
          break;

   case 4: V1.getHeight();
           V1.setHeight(12);
           break;   
   
   default: Cylinder();
                    

  }
}         

   return 0;      

}