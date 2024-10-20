#include <iostream>

using namespace std;

void MakeBase(const char* pizzaName)
{
    cout << "Making " << pizzaName << " pizza base" << endl;
}

void AddToppings(const char* pizzaName)
{
    cout << "Adding " << pizzaName << " toppings" << endl;
}

void BakePizza(const char* pizzaName)
{
    cout << "Baking " << pizzaName << " pizza" << endl;
}

void MakeChickenPizza()
{
    // cout << "Making chicken pizza base" << endl;
    MakeBase("Chicken");

    // cout << "Adding chicken toppings" << endl;
    AddToppings("Chicken");

    //cout << "Baking chicken pizza" << endl;
    BakePizza("Chicken");
}

void MakeBeefPizza()
{
    //cout << "Making Beef pizza base" << endl;
    MakeBase("Beef");

    //cout << "Adding Beef toppings" << endl;
    AddToppings("Beef");

    //cout << "Baking Beef pizza" << endl;
    BakePizza("Beef");

}

void MakeCheesePizza()
{
    //cout << "Making Cheese pizza base" << endl;
    MakeBase("Cheese");

    //cout << "Adding Cheese toppings" << endl;
    AddToppings("Cheese");

    //cout << "Baking Cheese pizza" << endl;
    BakePizza("Cheese");
}

void BuyPizza(int choice)
{
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
}

int main()
{
    int choice;
    cout << "Please choose your Pizza: (1 for beef, 2 for chicken, 3 for cheese): ";
    cin >> choice;
    BuyPizza(choice);
    return 0;
}
