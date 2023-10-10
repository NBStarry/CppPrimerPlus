#include <iostream>
using namespace std;

int main()
{
    int daphne_balance = 100, cleo_balance = 100, years = 0;
    while(cleo_balance <= daphne_balance)
    {
        daphne_balance += 10;
        cleo_balance += cleo_balance * 0.05;
        years++;
    }
    cout << "After " << years << " years, Cleo's balance exceeds Daphne's balance." << endl;
    cout << "Daphne's balance: " << daphne_balance << endl;
    cout << "Cleo's balance: " << cleo_balance << endl;
    
    return 0;
}