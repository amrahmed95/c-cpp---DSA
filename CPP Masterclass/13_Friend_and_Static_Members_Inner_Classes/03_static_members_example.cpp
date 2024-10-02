#include <iostream>
using namespace std;

class Car
{
public:
    static int price;
    static int getPrice()
    {
        return price;
    }
};
int Car::price = 20;

/////////////////////////////////////////////////////////////////////////
class Student
{
public:
    int roll;
    string name;
    static int addNo;
    Student(string n)
    {
        addNo++;
        roll = addNo;
        name = n;
    }
    void display()
    {
        cout << "Name is " << name << " , RollNo is " << roll <<endl;
    }
};
int Student::addNo = 0;



int main()
{
    Car c1, c2, c3;
    cout << c1.getPrice() << endl;
    cout << c2.getPrice() << endl;
    cout << c3.getPrice() << endl;
    cout << Car::getPrice() << endl;

    cout << "-----------------------------" << endl;

    Student s1("John");
    Student s2("Ravi");
    Student s3("Khan");


    s1.display();   // Name is John , RollNo is 1
    s2.display();   // Name is Ravi , RollNo is 2
    s3.display();   // Name is Khan , RollNo is 3

    cout << endl;

    cout << "Number of admissions = " << Student::addNo << endl;    // 3


    return 0;
}
