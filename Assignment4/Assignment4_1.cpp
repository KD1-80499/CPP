#include<iostream>
using namespace std;

class Time
{
  private:
     int h;
     int m;
     int s;
   public:
      
      Time()
      {

      }
      Time(int h,int m,int s)
      {
        this->h=h;
        this->m=m;
        this->s=s;
      }
      void getHour()
      {
        cout<<"enter hour="<<endl;
        cin>>this->h;
       
      }
      void setHour()
      {
          this->h=h;
      }
      void getMinute()
      {
         cout<<"enter min="<<endl;
         cin>>this->m;
      }
      void setMinute()
      {
          this->m=m;
      }
      void getSeconds()
      {
         cout<<"enter second"<<endl;
         cin>>this->s;
      }
      void setSeconds()
      {
          this->s=s;
      }
      void printTime()
      {
        cout<<this->h<<":"<<this->m<<":"<<this->s<<endl;
    
      }

};

int main()
{
    
   Time **arr=new Time *[5];

   for(int i=0;i<5;i++)
   {
     arr[i]= new Time();
   }    
   for(int i=0;i<5;i++)
     {
        cout<<"enter values"<<i<<endl;
        arr[i]->getHour();
        arr[i]->getMinute();
        arr[i]->getSeconds();
     }

     for(int i=0;i<5;i++)
     {
        cout<<"values at index"<<endl;
        arr[i]->printTime();
     }

     for(int i=0;i<5;i++)
        delete arr[i];

     delete[] arr;   

    return 0;
}
