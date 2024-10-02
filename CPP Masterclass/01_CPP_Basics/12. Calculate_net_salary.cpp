/*
    Write a program to calculate Net Salary.
    Program should take the following as inputs:
        1. Basic Salary
        2. Percentages of Allowances
        3. Percentages of Deductions

NetSalary = Basic Salary + Basic Salary*Percentages of Allowances - Basic Salary*Percentages of Deductions

*/

#include <iostream>>
using namespace std;

int main()
{
    float basic;
    float percentAllow;
    float percentDeduct;
    float netSalary;

    cout << "Enter Basic Salary: ";
    cin >> basic;

    cout << "Enter Percent of Allowances: ";
    cin >> percentAllow;

    cout << "Enter Percent of Deductions: : ";
    cin >> percentDeduct;

    netSalary = basic + (basic*percentAllow/100) - (basic*percentDeduct/100);

    cout << "Net Salary is: " << netSalary;
    return 0;

}



