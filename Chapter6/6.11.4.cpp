#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

struct bop
{
    char fullname[20];
    char title[20];
    char bopname[20];
    int preference;
};

int main()
{
    vector<bop> bops;
    char choice;
    bool exit = false;
    bop bop1 = {"Wimp Macho", "Junior Programmer", "WM", 0};
    bop bop2 = {"Raki Rhodes", "Middle Programmer", "RR", 1};
    bop bop3 = {"Celia Laiter", "Senior Programmer", "CL", 2};
    bop bop4 = {"Hoppy Hipman", "Analyst Trainee", "HH", 1};
    bop bop5 = {"Pat Hand", "Analyst Trainee", "PH", 2};
    bops.push_back(bop1);
    bops.push_back(bop2);
    bops.push_back(bop3);
    bops.push_back(bop4);
    bops.push_back(bop5);

    cout << "Benevolent Order of Programmers Report" << endl;
    cout << "a. display by name\tb. display by title" << endl;
    cout << "c. display by bopname\td. display by preference" << endl;
    cout << "q. quit" << endl;
    cout << "Enter your choice: ";

    while(!exit && cin.get(choice))
    {
        switch (choice)
        {
            case 'a' : 
                for (int i = 0; i < bops.size(); i++)
                {
                    cout << bops[i].fullname << endl;
                }
                break;
            case 'b' :
                for (int i = 0; i < bops.size(); i++)
                {
                    cout << bops[i].title << endl;
                }
                break;
            case 'c' :
                for (int i = 0; i < bops.size(); i++)
                {
                    cout << bops[i].bopname << endl;
                }
                break;
            case 'd' :
                for (int i = 0; i < bops.size(); i++)
                {
                    switch (bops[i].preference)
                    {
                        case 0 :
                            cout << bops[i].fullname << endl;
                            break;
                        case 1 :
                            cout << bops[i].title << endl;
                            break;
                        case 2 :
                            cout << bops[i].bopname << endl;
                            break;
                    }
                }
                break;
            case 'q' :
                cout << "Bye!" << endl;
                exit = true;
                break;
            case '\n' :
                continue;
            default :
                cout << "Please enter a, b, c, d, or q: ";
                continue;
        }
        if(!exit)
            cout << "Next choice: ";
    }
    
    return 0;
}