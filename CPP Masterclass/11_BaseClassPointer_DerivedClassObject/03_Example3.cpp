#include <iostream>
using namespace std;


class BasicCar
{
public:
    void start()
    {
        cout << "car Started" << endl;
    }
};


class AdvancedCar:public BasicCar
{
public:
    void PlayMusic()
    {
        cout << "Music is playing" << endl;
    }
};


int main()
{
    AdvancedCar a;
    BasicCar *p = &a;

    p -> start();
    //p -> PlayMusic(); [NOT ALLOWED]

    return 0;
}
