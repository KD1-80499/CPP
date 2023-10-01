#include<iostream>
using namespace std;

class Employee
{   
    private:
    int id;
    float sal;
    string designation;

    public:

    Employee()
    {
      cout<<"inside ctor employee"<<endl;
        this->id=0;
        this->sal=0;
        this->designation=" ";

    }
    Employee(int id,float sal,string designation)
    {
        this->id=id;
        this->sal=sal;
        this->designation=designation;
    
    }
     void accept()
    {
   
     cout<<"Enter id"<<endl;
     cin>>this->id;
     cout<<"Enter sal"<<endl;
     cin>>this->sal;
     cout<<"Enter Deisgnation"<<endl;
     cin>>this->designation;
    
    } 

    void display()
    { 
    
      cout<<"emp id="<<this->id<<endl;;
      cout<<"emp sal="<<this->sal<<endl;
      cout<<"emp designation="<<this->designation<<endl;

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
    string get_designation()
    {
        return this->designation;
    }
    virtual ~Employee()
    
    {
      
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
       Manager(int id, float sal, string designation ,float bonus): Employee(id,sal,designation) ,bonus(bonus)
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
      cout<<"iEmployee arr[10];nside salesman ctor"<<endl;
        this->comm=0;
    } 
    Salesman(int id, float sal, string designation ,float comm): Employee(id,sal,designation) ,comm(comm)
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

   Sales_Manager(int id, float sal, string designation ,float bonus,float comm): Employee(id,sal,designation) , Manager(id,sal,designation,bonus), Salesman(id,sal,designation,comm)
   {
  
   }

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

    
 int menu()
 {
    int choice;

    cout<<"-------------------------"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Accept Employee"<<endl;
    cout<<"2. Display count"<<endl;
    cout<<"3. Display designation"<<endl;
    cout<<"*******************************************"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    return choice;
 }

 int main()
 {
  int mancount=0;
  int salmancount=0;
  int salmanager=0; 
  int choice;
  int index  = 0;
  Employee *arr[index];
 
  

  while((choice=menu())!=0)
  {
    switch(choice)
    {
        case 0: break;

        case 1:int choice1;
               cout<<"1.Accept Manager"<<endl;
               cout<<"2.Accept Salesman"<<endl;
               cout<<"3.Accept Salesmanager"<<endl;
               cout<<"Enter choice"<<endl;
               cin>>choice1;

               
           switch(choice1)
               {  
              case 1:
                if (index<10)
                {
                arr[index]=new Manager(1,7000,"manager",600);
                arr[index]->accept();
                index++;
                break;
                }
            

               case 2:
                 if (index<10)
                 {
                arr[index]=new Salesman(2,8000,"salesman",700);
                arr[index]->accept();
                index++;
                break;
                 }
                 

              case 3:
                 if (index<10)
                 {
                arr[index]=new Sales_Manager(3,9000,"salesmanager",800,200);
                arr[index]->accept();
                index++;
                break; 
                 }                          
               }
               break;
             
            
        case 2:
                 for(int i=0;i<index;i++)
                  {
                   if(arr[i]->get_designation() == "Manager")
                   {
                   mancount++;
                   }               
                   if(arr[i]->get_designation()=="Salesman")
                  {
                   salmancount++;
                  }
                  if(arr[i]->get_designation()=="Salesmanager")
                  {
                   salmanager++;
                  }
                       
                   cout<<"salesmanager count : "<<mancount<<endl;
                   cout<<"1.Count Manager :"<<salmancount<<endl;
                   cout<<"2.Count Salesman :"<<salmancount<<endl;
                   cout<<"3.Count Salesmanager :"<<salmanager<<endl;
               }
               break;
          case 3:
          {
                 for(int i=0;i<index;i++)
                  {
                   if(arr[i]->get_designation() == "Manager")
                    exit;
                   
                   }
                      cout<<"Designation:Manager"<<endl;
                  
                 for(int i=0;i<index;i++) 
                       {
                         if(arr[i]->get_designation()=="Salesman")
                          exit;
                       }  
                       cout<<"Designation:Salesman"<<endl;
                        
                      for(int i=0;i<index;i++)
                      {
                        if(arr[i]->get_designation()=="Salesmanager")
                         exit;
                       }  
                       cout<<"Designation:salmanager"<<endl;
                      

          } 
          break;
    }

  }       
    
     for (int i = 0; i < index; i++)
     {
     delete arr[i];
     }

  cout<<"Thank you...."<<endl;
  return 0;
 }
 