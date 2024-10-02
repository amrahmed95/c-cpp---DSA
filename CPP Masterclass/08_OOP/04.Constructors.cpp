#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;

    public:
        // Non Parameterized Constructor
      /*  Rectangle()
        {
            length = 1;
            breadth = 1;
        }

        */

        // Parameterized Constructor
        Rectangle(int l=1, int b=1)
        {
            //length = l;
            //breadth = b;
            setLength(l);
            setBreath(b);
        }

        Rectangle(Rectangle &rec)
        {
            length = rec.length;
            breadth = rec.breadth;
        }



        void setLength(int l)
        {
            if (l < 0)
                length = 1;
            else
                length = l;
        }

        void setBreath(int b)
        {
            if (b < 0)
                breadth = 1;
            else
                breadth = b;

        }

        int getLength()
        {
            return length;
        }

        int getBreadth()
        {
            return breadth;
        }


        int area()
        {
            return length*breadth;
        }

        int perimeter()
        {
            return 2*(length+breadth);
        }
};

 int main()
 {
     // Default Constructor
     Rectangle r0;
     cout << " Default Constructor " << endl;
     cout << r0.area() << endl;

     cout << "----------------------------" << endl;
     cout << "Non Parameterized Constructor " << endl;
     Rectangle r1;
     cout << r1.area() << endl;

     cout << "----------------------------" << endl;
     cout << " Parameterized Constructor " << endl;
     Rectangle r2(10,5);
     cout << r2.area() << endl;

     cout << "----------------------------" << endl;
     cout << " Copy Constructor " << endl;
     Rectangle r3(r2);
     cout << r3.area() << endl;
     return 0;
 }
