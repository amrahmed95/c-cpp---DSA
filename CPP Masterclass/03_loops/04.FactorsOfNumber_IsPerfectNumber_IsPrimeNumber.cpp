/*

n = 8

i                   Print(i)(Factors)   sumOfFacts
--------------------------------------------------
1       8%1=0               1           0+1=1
2       8%2=0               2           1+2=3
3       8%3=2
4       8%4=0               4           3+4=7
5       8%5=3
6       8%6=2
7       8%7=1
8       8%8=0               8           7+8=15

--------------------------------------------------

Is Perfect Number ?

n = 8   => (8*2 = 16) != (Sum=15) => Not Perfect Number

n = 6   => (6*2 = 12) == (Sum=1+2+3+6 = 12) => Perfect Number


Is Prime Number ?

n=8  =>  factors => 1,2,4,8 =>   count=4 => not a prime number
n=13 =>  factors => 1,13    =>   count=2 => a prime number
*/

#include <iostream>
using namespace std;

int main()
{
    int n, i, sumOfFact=0, countOfFacts=0;
    cout << "Enter n: ";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        if (n%i == 0)
        {
            cout << i << endl;

            sumOfFact +=i;
            countOfFacts++;
        }

    }

    cout << "Sum of Factors = " << sumOfFact << endl;

    if (n* 2 == sumOfFact)
        cout << "It's a perfect Number" << endl;
    else
        cout << "It's not a perfect Number" << endl;


    if (countOfFacts == 2)
        cout << "It's a prime number" << endl;
    else
        cout << "It's not a prime number" << endl;

    return 0;
}
