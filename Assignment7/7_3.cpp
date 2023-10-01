#include <iostream>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 10;

struct Employee {
    string name;
    string designation;
};

int main() {
    Employee* employees[MAX_EMPLOYEES] = {nullptr};
    int employeeCount = 0;

    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Accept Employee" << endl;
        cout << "2. Display the count of all employees with respect to designation" << endl;
        cout << "3. Display respective designation employees" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {
            case 1: {
                if (employeeCount < MAX_EMPLOYEES) {
                    employees[employeeCount] = new Employee;
                    cout << "Enter employee name: ";
                    cin.ignore();
                    getline(cin, employees[employeeCount]->name);
                    cout << "Enter employee designation: ";
                    getline(cin, employees[employeeCount]->designation);
                    employeeCount++;
                    cout << "Employee added successfully!" << endl;
                } else {
                    cout << "Maximum employee limit reached." << endl;
                }
                break;
            }
            case 2: {
                int designationCount[MAX_EMPLOYEES] = {0};

                for (int i = 0; i < employeeCount; i++) {
                    for (int j = 0; j < employeeCount; j++) {
                        if (i != j && employees[i]->designation == employees[j]->designation) {
                            designationCount[i]++;
                        }
                    }
                }

                cout << "Employee count by designation:" << endl;
                for (int i = 0; i < employeeCount; i++) {
                    int count = 1 + designationCount[i];
                    if (designationCount[i] > 0) {
                        designationCount[i] = -1; // Mark as counted to avoid duplicate counts
                        cout << "Designation: " << employees[i]->designation << ", Count: " << count << endl;
                    }
                }
                break;
            }
            case 3: {
                string searchDesignation;
                cout << "Enter the designation to display employees: ";
                cin.ignore();
                getline(cin, searchDesignation);

                cout << "Employees with designation '" << searchDesignation << "':" << endl;
                bool found = false;

                for (int i = 0; i < employeeCount; i++) {
                    if (employees[i]->designation == searchDesignation) {
                        cout << "Name: " << employees[i]->name << ", Designation: " << employees[i]->designation << endl;
                        found = true;
                    }
                }

                if (!found) {
                    cout << "No employees found with designation '" << searchDesignation << "'" << endl;
                }
                break;
            }
            case 4:
                for (int i = 0; i < employeeCount; i++) {
                    delete employees[i]; // Deallocate memory
                }
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
