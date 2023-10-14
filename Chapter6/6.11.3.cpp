#include <iostream>
using namespace std;

int main()
{
    char choice;
    bool exit = false;
    cout << "Please enter one of the following choices: " << endl;
    cout << "c) carnivore\tp) pianist" << endl;
    cout << "t) tree\t\tg) game" << endl;

    while(!exit && cin.get(choice))
    {
        switch (choice)
        {
            case 'c':
                cout << "A lion is a carnivore." << endl;
                exit = true;
                break;
            case 'p':
                cout << "Liszt is a pianist." << endl;
                exit = true;
                break;
            case 't':
                cout << "A maple is a tree." << endl;
                exit = true;
                break;
            case 'g':
                cout << "Monopoly is a game." << endl;
                exit = true;
                break;
            default:
                cout << "Please enter a c, p, t, or g: ";
                continue;
        }
    }
    
    return 0;
}