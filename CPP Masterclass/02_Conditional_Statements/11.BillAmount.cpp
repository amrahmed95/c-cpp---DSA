/*
    Write a program to offer discounts on total bill Amount

    Program should take Total Amount as input and calculate discount.

    if bill amount < 100                    => No discount
    if bill amount >= 100 and less than 500 => 10% discount
    if bill amount >= 500                   => 20% discount

*/


#include <iostream>
using namespace std;

int main()
{
    float billAmount, discount=0.0;
    cout << "Enter total Bill Amount: ";
    cin >> billAmount;

    if (billAmount >= 500)
    {
        discount = billAmount*0.2;

    }
    else if (billAmount >= 100 && billAmount < 500){
        discount = billAmount*0.1;
    }
    else{
        discount = 0;
    }

    cout << "Bill Amount is " << billAmount << endl;
    cout << "Discount is " << discount << endl;
    cout << "Discounted Amount is " << billAmount-discount << endl;

    return 0;
}
