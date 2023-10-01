#ifndef CYLINDER_H
#define CYLINDER_H
#include<iostream>
using namespace std;
 
 class Cylinder
{
private:
    double radius;
    double height;
    double volume;
public:
Cylinder();
Cylinder(double radius,double height); 
void acceptVol();
void printVolume();
double getRadius();
void setRadius(double r);
double getHeight();
void setHeight(double h);
double getVolume();
};

#endif


