#include <iostream>
using namespace std;


class Student
{
    private:
        int roll;
        string Name;
        int mathMarks;
        int phyMarks;
        int chemMarks;

    public:
        Student(int roll, string Name, int mathMarks, int phyMarks, int chemMarks)
        {
            this->roll = roll;
            this->Name = Name;
            this->mathMarks = mathMarks;
            this->phyMarks = phyMarks;
            this->chemMarks = chemMarks;
        };

        int total()
        {
            return mathMarks + phyMarks + chemMarks;
        }

        char grade()
        {
            float average=total()/3;
            if(average > 60)
                return 'A';
            else if(average>=40 && average<60)
                return 'B';
            else
                return 'C';
        }

};

int main()
{
    int roll;
    string name;
    int m,p,c;

    cout << "Enter Roll number of a student: " ;
    cin >> roll;

    cout << "Enter Name of a student: " ;
    cin >> name;

    cout<<"Enter marks in 3 subjects";
    cin>>m>>p>>c;

    Student s(roll, name, m, p, c);
    cout << "Total Marks = "        << s.total() << endl;
    cout << "Grade of student: "    << s.grade() << endl;

    return 0;
}




