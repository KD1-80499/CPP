#include<iostream>

using namespace std;

class Cylinder
{
private:
    double radius;
    double height;
    double volume;
public:

 Cylinder():radius(10),height(10)
 {
    
 }
 Cylinder(double radius,double height)
 {
    this->radius=radius;
    this->height=height;
 }

    
 void acceptVol()
 {
   cout<<"Enter radius and height"<<endl;
   cin>>radius>>height;
 }

 
 void printVolume()
 {
    double volume=3.14*radius*radius*height;
    cout<<"VolumeofCylinder=  "<<volume<<endl;
 }  
 
 double getRadius()
 {
    return this->radius;
 }
 void setRadius(double r)
 {
    this->radius=r;
 }
 double getHeight()
 {
    return this->height;
 }
 void setHeight(double h)
 {
    this->height=h;
 }

 double getVolume()
 {
     return this->volume;
 }
 


};

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

  while ((choice=menu())!=0)
{
  switch(choice)
  {  
     
  case 1: V1.acceptVol();
          //V1.displayVol();
          break;

  case 2: V1.printVolume();
         break;

  case 3: V1.getRadius();
          cout<<" Radius= "<<V1.getRadius()<<endl;
          V1.setRadius(10);
          break;

   case 4: V1.getHeight();
            cout<<" Height= "<<V1.getHeight()<<endl;
           V1.setHeight(12);
           break;   
   
   default: Cylinder();
                    

  }
}         

   return 0;      
}