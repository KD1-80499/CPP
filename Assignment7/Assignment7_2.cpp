#include<iostream>
using namespace std;

class Product
{
 private:
   int id;
   string title;
   float price;
   char type;

 public:
    Product()
    { 
      this->id=0;
      this->title=" ";
      this->price=0;
    }  
    Product(int id,string title,float price)
    {
      this->id=id;
      this->title=title;
      this->price=price;
    }
    virtual void accept()
    {
        cout<<"Enter id=";
        cin>>this->id;
        cout<<"Enter title=";
        cin>>this->title;
        cout<<"Enter price=";
        cin>>this->price;
    }
    void display()
    {
        cout<<"ID="<<this->id;
        cout<<"Title="<<this->title;
        cout<<"Price="<<this->price;
    }
    int get_id()
    {
        return this->id;
    }
    void set_id(int id)
    {
        this->id=id;
    }
    string get_title()
    {
        return this->title;
    }
    void set_id(string itle)
    {
        this->title=title;
    }
    float get_price()
    {
        return this->price;
    }
    void set_price(int price)
    {
        this->price=price;
    }
    char gettype()
    {
        return this->type;
    }
    void settype(char type)
    {
        this->type = type;
    }
   
   friend void calculate_bill(Product *arr[],int index);
};

class Book: public Product
{
  private:
    string author;
    char type;
  public:
    Book()
    {
        this->author=" ";
        settype('B');
    }  
    Book(string author,int id,string title,float price): Product(id,title,price)
    {
       this->author=author;
       settype('B');
    }
    void accept()
    {
        Product::accept();
        cout<<"Enter aurthor=";
        cin>>this->author;
    }
    void display()
    {
        Product::display();
        cout<<"Author="<<author<<endl;
    }
};

class Tape:public Product
{
 private:
   string artist;
   char type;

 public:
   Tape()
   {
    this->artist=" ";
    settype('T');

   }  
   Tape(int id,string title,float price,string artist):Product(id,title,price)
   {
    this->artist=artist;
    settype('T');
   }
   void accept()
    {
        Product::accept();
        cout<<"Enter artist=";
        cin>>this->artist;
    }
    void display()
    {
        Product::display();
        cout<<"Artist="<<artist<<endl;
    }
};

int menu()
{
    int choice;
    cout<<"0.Exit="<<endl;
    cout<<"1.Add Book="<<endl;
    cout<<"2.Add Tape="<<endl;
    cout<<"3.Display product="<<endl;
    cout<<"4.Display bill="<<endl;
    cout<<"Enter Choice="<<endl;
    cin>>choice;

    return choice;
}

void calculate_bill(Product *arr[],int index)
{
    float total_price=0;
    for(int i=0;i<index;i++)
    {
        if(arr[i]->type=='B')
        {
          total_price=arr[i]->price*0.90;
        }
        else
        {
            total_price=arr[i]->price*0.95;
        }
    }
    cout<<"Total Price="<<total_price<<endl;
}

int main()
{
    int choice;
    Product *arr[3];
    int index=0;

    while((choice=menu())!=0)
    {
        switch(choice)
        {
        case 1:
         if(index<3)
         {
            arr[index]=new Book();
            arr[index]->accept();
            index++;
         }
         else
         {
            cout<<"Product is full"<<endl;
         }
         break;

         case 2:
          if(index<3)
          {
             arr[index]=new Tape;
             arr[index]->accept();
             index++;
          }
          else
          {
            cout<<"Product is full"<<endl;
          }
          break;

          case 3:
          {
            for(int i=0;i<index;i++)
            {
                arr[i]->display();
            }
          }
          break;

          case 4:
            calculate_bill(arr,index);
            cout<<"total bill=";
            break;

          default:
             cout<<"Wrong choice"<<endl;
             break;  
        }
    }
    for(int i=0;i<index;i++)
    {
        delete arr[i];
    }
    cout<<"Thank you"<<endl;

    return 0;

}

