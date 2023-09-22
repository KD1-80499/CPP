#include<stdio.h>

struct Date
{
int day;
int month;
int year;

}; 

void initDate(struct Date* ptrDate)
{
printf("Inside ctor");
ptrDate->day=1;
ptrDate->month=12;
ptrDate->year=2000;

}

void acceptDateFromConsole(struct Date* ptrDate)
{
printf("Enter day,month,year");
scanf("%d %d %d",&ptrDate->day,&ptrDate->month,&ptrDate->year);

}

void printDateOnConsole(struct Date* ptrDate)
{
printf("Date is=%d/%d/%d",ptrDate->day,ptrDate->month,ptrDate->year);
}

int main()
{
struct Date d1;
int option;

printf("Enter choice, 1.default,2.enter date,3.enter choice");
scanf("%d",&option);
 do
    {
switch(option)
{
   
    
case 1:break;

case 2:initDate(&d1);printDateOnConsole(&d1);break;

case 3:acceptDateFromConsole(&d1);printDateOnConsole(&d1);break;
    }

}while(option!=0);

return 0;
}