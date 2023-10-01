#include <iostream>
using namespace std;

class Tollboth
{
private:
    unsigned int totalcars;
    double moneycollected;

public:
    Tollboth(unsigned int totalcars = 0, double moneycollected = 0)
    {
    }

    int payingCar()
    {
        totalcars++;
        moneycollected = moneycollected + 0.50;
        return 0;
    }
    int nopayCar()
    {
        totalcars++;
        return 0;
    }
    int printOnConsole()
    {
        cout<<"***********************************************************";
        cout << "Total cars are " << totalcars << endl;
        cout << "Total amount is " << moneycollected << endl;
        cout << "The paying cars are " << moneycollected / 0.50 << endl;
        cout << "The non paying cars are " << moneycollected - (totalcars / 0.50) << endl;
    }
};

int main()
{
    Tollboth T;

    int choice;
    while (1)
    {
        cout << "0.exit" << endl;
        cout << "1.count paying cars" << endl;
        cout << "2.count non-paying cars" << endl;
        cout << "3.show totals" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            T.payingCar();
            cout << "Paying cars recorded" << endl;
            break;

        case 2:
            T.nopayCar();
            cout << "Non paying car recorded" << endl;
            break;

        case 3:
            T.printOnConsole();
            break;

        default:
            cout << "OK BYE!!";
            exit(1);
        }
    }
    return 0;
}
