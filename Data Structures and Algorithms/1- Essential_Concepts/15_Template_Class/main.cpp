#include <iostream>
using namespace std;

template <class T>
class Arithmatic
{
private:
    T a;
    T b;
public:
    Arithmatic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmatic<T>::Arithmatic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmatic<T>::add()
{
    T c;
    c = a + b;
    return c;
}

template <class T>
T Arithmatic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}


int main()
{
    Arithmatic<int> ar1(10,5);
    cout << "Add : " << ar1.add() << endl;
    cout << "Sub : " << ar1.sub() << endl;


    Arithmatic<float> ar2(1.5, 1.2);
    cout << "Add : " << ar2.add() << endl;
    cout << "Sub : " << ar2.sub() << endl;

    return 0;


}
