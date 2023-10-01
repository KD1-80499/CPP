#include<iostream>
using namespace std;

class Volume
{
   private:
     float length;
     float width;
     float height;

   public:

      Volume()
      {
         this->length=10;
         this->width=10;
         this->height=10;

      }
      void acceptVol()
      {
        cout<<"\nenter length=";
        cin>>this->length;
        
        cout<<"\nenter width=";
        cin>>this->width;

        cout<<"\nenter heigth=";
        cin>>this->height;

      }
    
      void displayVol()
      {
        cout<<"length:"<<length<<endl;
        cout<<"width:"<<width<<endl;
        cout<<"height:"<<height<<endl;
      }
      
     
      void volume()
      {
        cout<<"\nvolume="<<length*width*height<<endl;
      }
};
     int menu()
     {
        int choice;
        
        cout<<"0.exit"<<endl;
        cout<<"1.enter length,width,height"<<endl;
        cout<<"2.display volume"<<endl;
        cout<<"3.Default"<<endl;
        cout<<"enter choice"<<endl;
        cin>>choice;
        

        return choice;
     }



     int main()
     {
        Volume V1;
        Volume V2;

        int choice;

        while((choice=menu())!=0)
        {
            switch(choice)
            {
                case 1: V1.acceptVol();
                        V1.displayVol();
                break;


                case 2:V1.displayVol();
                       V1.volume();
                       break;

                case 3:V2.displayVol();
                        break;      

                default: cout<<"Enter choice 1 or 2"<<endl;
                

            }
        }
        return 0;
     }