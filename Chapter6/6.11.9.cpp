#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct contributor 
{
    string name;
    double amount;
}; 

int main()
{  
    ifstream inFile;
    inFile.open("6.11.9.txt");
    if(!inFile.is_open())
    {
        exit(EXIT_FAILURE);
    }

    int num;
    (inFile >> num).get();
    contributor *contributors = new contributor[num];
    for (int i = 0; i < num; i++)
    {
        getline(inFile, contributors[i].name);
        (inFile >> contributors[i].amount).get();
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