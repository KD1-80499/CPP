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

    void accept()
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

    void display()
    {
        cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
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
        //this->DOB.day=day;


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

     void accept()
     {
       cout<<"enter person name=";
       cin>>this->name;
       cout<<"enter person address=";
       cin>>this->address;
       DOB.accept();
     }
     
     void display()
     {
        cout<<"Person name is="<<this->name<<endl;
        cout<<"person address is="<<this->address<<endl;
        DOB.display();
     }

};


class Employee :public Person
{   
    private:
    int id;
    float sal;
    string dept;
    Date DOJ;

    public:

    Employee()
    {
        this->id=0;
        this->sal=0;
        this->dept="";
    }
    Employee(int id,float sal,string dept,int day,int month,int year):DOJ(day,month,year)
    {
        this->id=id;
        this->sal=sal;
        this->dept=dept;
        //this->DOJ.day=day;
         //this->DOJ.set_day(day);
    }

    void acceptEmployee()
    {
     //Person::accept();
     this->accept();
     cout<<"Enter id=";
     cin>>this->id;
     cout<<"enter sal=";
     cin>>this->sal;
     cout<<"enter dept=";
     cin>>this->dept;
     DOJ.accept();
    
    } 

    void displayEmployee()
    { 
      //Person::display();
      this->display();
      cout<<"emp id="<<this->id<<endl;
      cout<<"emp sal="<<this->sal<<endl;
      cout<<"emp dept="<<this->dept<<endl;
      DOJ.display();

    }
    int get_id()
    {
        return this->id;
    }
    void set_id(int id)
    {
        this->id=id;
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




int main()
{    
   Employee e1;
   e1.acceptEmployee();
   e1.displayEmployee();

    return 0;
}