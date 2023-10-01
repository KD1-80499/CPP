#include"./cylinder.h"
#include<iostream>
using namespace std;
 
 
 Cylinder::Cylinder()
 {
    
 }
 Cylinder::Cylinder(double radius,double height)
 {
    this->radius=radius;
    this->height=height;
 }

    
 void Cylinder::acceptVol()
 {Cylinder:
   cout<<"Enter radius and height"<<endl;
   cin>>radius>>height;
 }

 
 void Cylinder::printVolume()
 {
    double volume=3.14*radius*radius*height;
    cout<<"VolumeofCylinder=  "<<volume<<endl;
 }  
 
 double Cylinder::getRadius()
 {
    return this->radius;
 }
 void Cylinder::setRadius(double r)
 {
    this->radius=r;
 }
 double Cylinder::getHeight()
 {
    return this->height;
 }
 void Cylinder::setHeight(double h)
 {
    this->height=h;
 }

 double Cylinder::getVolume()
 {
     return this->volume;
 }
 


