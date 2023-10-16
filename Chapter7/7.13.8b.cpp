//arrobj.cpp -- functions with array objects
#include <iostream>
#include <string>
const int Seasons = 4;
const char *Snames[Seasons] =
    {"Spring", "Summer", "Fall", "Winter"};

struct Expense
{
    double expenses[Seasons];
};


void fill(Expense *pa);
void show(Expense *da);
int main()
{
    Expense *expenses;
    fill(expenses);
    show(expenses);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(Expense *pa)
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa->expenses[i];
    }
}

void show(Expense *da)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da->expenses[i] << '\n';
        total += da->expenses[i];
    }
    std::cout << "Total: $" << total << '\n';
}
