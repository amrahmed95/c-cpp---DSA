#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }

    void display()
    {
        cout<<real<<" + i"<<img<<endl;
    }

    /*
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    */

    friend Complex operator+(Complex c1, Complex c2);

    friend ostream& operator<<(ostream &o, Complex &c);

};


Complex operator+(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}

ostream& operator<<(ostream &out, Complex &c)
{
    out << c.real << " +i" << c.img << endl;
    return out;
}

int main()
{
    Complex c1(5,3),c2(10,5),c3;
    c3=c1+c2;
    operator<<(cout,c3);
    cout<<c3<<endl;
    return 0;
}

