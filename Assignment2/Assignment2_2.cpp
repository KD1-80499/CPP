#include<iostream>
using namespace std;

class Address
{
 private: 

    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
      building="malhar";
      street="dalvinagar";
      city="pune";  
      pin=411046;
    }

    Address(string b,string s,string c,int p)
    {
    this->building=b;
    this->street=s;
    this->city=c;
    this->pin=p; 
    }

    void acceptAddress()
    {
     cout<<"enter address,street,city,pin"<<endl;
     cin>>this->building>>this->street>>this->city>>this->pin;
    }

    void displayAddress()
    {
      cout<<"\nBuilding="<<building<<"\nStreet="<<street<<"\nCity="<<city<<"\npin"<<pin<<endl;
    }

    string getbuilding()
    {
      return this->building;
    }
    string getcity()
    {
      return this->city;
    }
    string getstreet()
    {
      return this->street;
    }
    int getpin()
    {
      return this->pin;
    }
    
    void setAddress(string b)
    {
      this->building=b;
    }
    void setcity(string c)
    {
      this->city=c;
    }
    void setstreet(string s)
    {
      this->street=s;
    }
    void setpin(int p)
    {
      this->pin=p;
    }
};
  int main()
  {
    Address a;
    a.acceptAddress();
    a.displayAddress();

    Address a1;
    a1.getpin();
    a1.displayAddress();
    
    Address a2;
    a2.setpin(212215);
    a2.displayAddress();


    return 0;
  }

    
    
