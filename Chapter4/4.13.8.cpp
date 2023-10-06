#include <iostream>
#include <string>
using namespace std;

struct Pizza
{
    string company;
    double diameter;
    double weight;
};

int main()
{
    Pizza * pPizza = new Pizza;
    cout << "Enter the diameter of the pizza: ";
    cin >> pPizza->diameter;
    cin.get();
    cout << "Enter the company name: ";
    getline(cin, pPizza->company);
    cout << "Enter the weight of the pizza: ";
    cin >> pPizza->weight;

    cout << "Company: " << pPizza->company << endl;
    cout << "Diameter: " << pPizza->diameter << endl;
    cout << "Weight: " << pPizza->weight << endl;

    delete pPizza;

    return 0;
}