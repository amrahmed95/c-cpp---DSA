#include <iostream>
using namespace std;

class test
{
private:
    int a;
    int b;

public:
    static int count;

    // Constructor
    test()
    {
        a = 10;
        b = 10;
        count++;
    }

    // Static function
    static int getCount()
    {
        return count;
    }

};
int test::count = 0;


int main()
{
    test t1, t2;
    cout << t1.count << endl;   // 2
    cout << t2.count << endl;   // 2

    t1.count = 25;
    cout << t2.count << endl;       // 25
    cout << test::count << endl;    // 25


    cout << t1.getCount() << endl;        // 25
    cout << test::getCount() << endl;     // 25

    return 0;
}
