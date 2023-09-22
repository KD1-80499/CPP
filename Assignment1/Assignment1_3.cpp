#include<iostream>
using namespace std;

class Student
{
private:
     int rollno;
     string name;
     int marks;
public:
    void initStudent()
    {
      rollno=1;
      name="Swa";
      marks=100;
    }
    void printStudentOnConsole()
    {
      cout<<"rollno="<<rollno<<"name="<<name<<"mark="<<marks<<endl;
    }
    void acceptStudentFromConsole()
    {
    cout<<"enter rollno name and marks";
    cin>>rollno>>name>>marks;
    }
};
    int main()
    {
        Student s1;
        s1.acceptStudentFromConsole();
        s1.printStudentOnConsole();

        return 0;
    }
    




