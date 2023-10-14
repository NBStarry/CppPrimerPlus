#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a string, end with @: ";
    while((ch = cin.get()) != '@')
    {
        if(isalpha(ch))
        {
            ch = islower(ch) ? toupper(ch) : tolower(ch);
            cout << ch;
        }
    }
    
    cout << endl;

    return 0;
}