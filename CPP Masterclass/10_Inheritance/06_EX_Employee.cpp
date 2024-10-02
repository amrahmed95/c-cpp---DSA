#include <iostream>
using namespace std;

class Employee
{
protected:
    int EmployeeID;
    string EmployeeName;
public:
    Employee(int id, string n)
    {
        EmployeeID = id;
        EmployeeName = n;
    }
    int getEmployeeID(){return EmployeeID;}
    string getEmployeeName(){return EmployeeName;}
};


class FullTimeEmployee : public Employee
{
private:
    int salary;
public:
    FullTimeEmployee(int id, string n, int sal):Employee(id, n)
    {
        salary = sal;
    }
    int getSalary(){return salary;}
};


class PartTimeEmployee : public Employee
{
private:
    int wage;
public:
    PartTimeEmployee(int id, string n, int w):Employee(id,n)
    {
        wage = w;
    }
    int getWage(){return wage;}
};


int main()
{
    PartTimeEmployee p1(1, "John", 300);
    FullTimeEmployee p2(2, "Raj", 5000);

    cout << "Salary of the full time Employee " <<  p2.getEmployeeName() << " is " << p2.getSalary() << endl;
    cout << "Wage of the part time Employee " <<  p1.getEmployeeName() << " is " << p1.getWage() << endl;
    return 0;
}
