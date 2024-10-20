#include <iostream>
using namespace std;

class pizza
{
private:
    void MakeBase();
    void AddToppings();
    void BakePizza();

protected:
    virtual const char* getPizzaName() = 0;

public:
    void MakePizza();
};


void pizza::MakeBase(){std::cout << "Making " << getPizzaName() << " pizza base" << endl;}
void pizza::AddToppings(){std::cout << "Adding " << getPizzaName() << " toppings" << endl;}
void pizza::BakePizza(){std::cout << "Baking " << getPizzaName() << " pizza" << endl;}
void pizza::MakePizza()
{
    MakeBase();
    AddToppings();
    BakePizza();
}


class chickenPizza : public pizza
{
protected:
    virtual const char* getPizzaName(){return "chicken";}
};

class BeefPizza : public pizza
{
protected:
    virtual const char* getPizzaName(){return "Beef";}
};

class CheesePizza : public pizza
{
protected:
    virtual const char* getPizzaName(){return "Cheese";}
};

// Adding a new Pizza //
class ShrimpPizza : public pizza
{
protected:
    virtual const char* getPizzaName(){return "Shrimp";}
};


void BuyPizza(pizza* p)
{
    p -> MakePizza();
}

int main()
{
    int choice;
    cout << "Please choose your Pizza: (1 for beef, 2 for chicken, 3 for cheese, 4 for shrimp): ";
    cin >> choice;

    pizza* p = NULL;
    switch (choice)
    {
    case 1:
        p = new BeefPizza();
        break;
    case 2:
        p = new chickenPizza();
        break;
    case 3:
        p = new CheesePizza();
        break;
    case 4:
        p = new ShrimpPizza();
        break;
    default:
        cout << "Invalid Choice!" << endl;
    }


    if (p)
    {
        BuyPizza(p);
        delete p;
    }

    return 0;
}
