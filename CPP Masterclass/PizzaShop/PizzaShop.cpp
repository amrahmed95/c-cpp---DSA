#include <iostream>

using namespace std;

void MakeChickenPizza()
{
    cout << "Making chicken pizza base" << endl;
    cout << "Adding chicken toppings" << endl;
    cout << "Baking chicken pizza" << endl;
}

void MakeBeefPizza()
{
    cout << "Making Beef pizza base" << endl;
    cout << "Adding Beef toppings" << endl;
    cout << "Baking Beef pizza" << endl;
}

void MakeCheesePizza()
{
    cout << "Making Cheese pizza base" << endl;
    cout << "Adding Cheese toppings" << endl;
    cout << "Baking Cheese pizza" << endl;
}

int main()
{
    int choice;
    cout << "Please choose your Pizza: (1 for beef, 2 for chicken, 3 for cheese): ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        MakeBeefPizza();
        break;
    case 2:
        MakeChickenPizza();
        break;
    case 3:
        MakeCheesePizza();
        break;
    default:
        cout << "Invalid Choice!" << endl;
    }
    return 0;
}
