#include <iostream>
#include <string>
using namespace std;

struct contributor 
{
    string name;
    double amount;
}; 

int main()
{  
    cout << "Enter the number of contributors: ";
    int num;
    (cin >> num).get();
    contributor *contributors = new contributor[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the name of contributor #" << i + 1 << ": ";
        getline(cin, contributors[i].name);
        cout << "Enter the amount of contribution: ";
        (cin >> contributors[i].amount).get();
    }

    cout << "Grand Patrons:" << endl;
    bool flag = false;
    for (int i = 0; i < num; i++)
    {
        if (contributors[i].amount >= 10000)
        {
            cout << contributors[i].name << endl;
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "none" << endl;
    }

    cout << "Patrons:" << endl;
    flag = false;
    for (int i = 0; i < num; i++)
    {
        if (contributors[i].amount < 10000)
        {
            cout << contributors[i].name << endl;
            flag = true;
        }
    }
    if (!flag)
    {
        cout << "none" << endl;
    }
    
    return 0;
}