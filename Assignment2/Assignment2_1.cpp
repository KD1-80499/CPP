#include <iostream>

using namespace std;

namespace NStudent
{
    class Student
    {
    public:
        int rollno;
        string name;
        int marks;
    };
}


int main()
{
    NStudent::Student S1;
    S1.rollno=1;
    S1.name="Swa";
    S1.marks=10;
    
    NStudent::Student S2;
    S2.rollno=2;
    S2.name="Nith";
    S2.marks=20;

 
   cout<<S1.rollno<<endl;
   cout<<S1.name<<endl;
   cout<<S1.marks<<endl;

   cout<<S2.rollno<<endl;
   cout<<S2.name<<endl;
   cout<<S2.marks<<endl;



    return 0;
}


