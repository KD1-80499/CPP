#include<iostream>
using namespace std;

class Employee
{   
    private:
    int id;
    float sal;

    public:

    Employee()
    {
      cout<<"inside ctor employee"<<endl;
        this->id=0;
        this->sal=0;

    }
    Employee(int id,float sal)
    {
        this->id=id;
        this->sal=sal;
    
    }
     void accept()
    {
   
     cout<<"Enter id"<<endl;
     cin>>this->id;
     cout<<"enter sal"<<endl;
     cin>>this->sal;
    
    } 

    void display()
    { 
    
      cout<<"emp id="<<this->id<<endl;;
      cout<<"emp sal="<<this->sal<<endl;

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
   

 };

 class Manager:virtual public Employee
 {
    private:
      float bonus;
    public:
       Manager()
       {
        cout<<"inside manager ctor"<<endl;
        this->bonus=10;
       }
       Manager(float bonus)
       {
        this->bonus=bonus;
       }
       
       float get_bonus()
       {
        return this->bonus;
       }
       void set_bonus(float bonus)
       {
         this->bonus=bonus;
       }

       void accept()
       {
   
       Employee::accept();
       this->acceptManager();
    
       }

       void display()
       { 
        
      Employee::display();
      this->displayManager();

      } 
       protected:
       void acceptManager()
       {
        cout<<"enter bonus="<<endl;
        cin>>this->bonus;
       }

       void displayManager()
       {
        cout<<"Bonus"<<this->bonus<<endl;
       }


 };

class Salesman:virtual public Employee
{
  private:
   float comm;
   public:
    Salesman()
    {
      cout<<"inside salesman ctor"<<endl;
        this->comm=0;
    } 
    Salesman(float comm)
    {
        this->comm=comm;
    }
     float get_comm()
    {
     return this->comm;
      }
     void set_comm(float comm)
       {
         this->comm=comm;
       }

       void accept()
       {
   
       Employee::accept();
       this->accept_Salesman();
    
       }

       void display()
       { 
        
      Employee::display();
      this->display_Salesman();

      } 
       
       protected:
       void accept_Salesman()
       {
        cout<<"enter comm="<<endl;
        cin>>this->comm;
       }

       void display_Salesman()
       {
        cout<<"Comm"<<this->comm<<endl;
       }
};

 class Sales_Manager:public Manager,public Salesman
 {
   public:

    void accept()
    {

      Employee::accept();
      Salesman::accept_Salesman();
      Manager::acceptManager();
    }
    void display()
    {  
      Employee::display(); 
      Salesman::display_Salesman();
      Manager::displayManager();
    }

 };

 int main()
 {
  
Sales_Manager sm1;
cout<<"++++++++++++++++++++++"<<endl;
sm1.accept();
cout<<"++++++++++++++++++++++"<<endl;
sm1.display();

   
    return 0;
 }

