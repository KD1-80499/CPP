#include<iostream>
using namespace std;

class Date
{
  private:
    int day;
    int month;
    int year;

  public:

    Date()
    {
        this->day=0;
        this->month=0;
        this->year=0;
    }  
    Date(int day,int month,int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void acceptDate()
    {
       cout<<"enter day=";
       cin>>this->day;
       cout<<"enter month=";
       cin>>this->month;
       cout<<"enter year=";
       cin>>this->year;
    }
    bool isLeapYear()
    {
        if((this->year%4==0 and this->year%400==0)||(this->year%4==0 and this->year%100!=0))
        return true;
        else
        return false;
    }

    void displayDate()
    {
        cout<<"Date="<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    }

    int get_day()
    {
        return this->day;
    }
    void set_day(int day)
    {
        this->day=day;
    }

     int get_month()
    {
        return this->month;
    }
    void set_month(int month)
    {
        this->month=month;
    }

     int get_year()
    {
        return this->year;
    }
    void set_year(int year)
    {
        this->year=year;
    }

   friend class Employee;

     
};


class Employee 
{   
    private:
    int empid;
    float sal;
    string dept;
    Date DOJ;

    public:

    Employee()
    {
        this->empid=0;
        this->sal=0;
        this->dept="";
    }
    Employee(int empid,float sal,string dept,int day,int month,int year):DOJ(day,month,year)
    {
        this->empid=empid;
        this->sal=sal;
        this->dept=dept;
        this->DOJ.day=day;
         this->DOJ.set_day(day);
    }
    void acceptEmployee()
    {
     cout<<"Enter id"<<endl;
     cin>>this->empid;
     cout<<"enter sal"<<endl;
     cin>>this->sal;
     cout<<"enter dept"<<endl;
     cin>>this->dept;
     DOJ.acceptDate();
    
    } 

    void displayEmployee()
    { 
      cout<<"emp id="<<this->empid;
      cout<<"emp sal="<<this->sal;
      cout<<"emp dept="<<this->dept;
      cout<<"joining date="<<endl;
      DOJ.displayDate();

    }
    int get_id()
    {
        return this->empid;
    }
    void set_id(int id)
    {
        this->empid=id;
    }
    float get_sal()
    {
        return this->sal;
    }
    void set_sal(float sal)
    {
        this->sal=sal;
    }
    string get_dept()
    {
        return this->dept;
    }
  
};


class Person
{
   private:
   string name;
   string address;
   Date DOB;

   public:
     Person()
     {
        this->name="";
        this->address="";
     }

     Person(string name,string address,int day,int month,int year):DOB(day,month,year)
     {
        this->name=name;
        this->address=address;


     }

     string get_name()
     {
        return this->name;
     }
     void set_name(string name)
     {
        this->name=name;
     }

     string get_address()
     {
        return this->address;
     }
     void set_address(string address)
     {
        this->address=address;
     }

     void acceptPerson()
     {
       cout<<"enter person name="<<endl;
       cin>>this->name;
       cout<<"enter person address"<<endl;
       cin>>this->address;
       DOB.acceptDate();
     }
     
     void displayPerson()
     {
        cout<<"Person name is"<<this->name<<endl;
        cout<<"person address is"<<this->address<<endl;
        DOB.displayDate();
     }

};

int main()
{    
   Employee e1;
   e1.acceptEmployee();
   e1.displayEmployee();

   Person p1;
   p1.acceptPerson();
   p1.displayPerson();
   

    return 0;
}