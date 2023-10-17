#include <iostream>
#include <string>
using namespace std;

void StringToUpper(string &str)
{
    for (int i = 0; i < str.length(); i++)
        str[i] = toupper(str[i]);
}

int main()
{
    string str;
    cout << "Enter a string (q to quit): ";
    while(getline(cin, str) && str != "q")
    {
        StringToUpper(str);
        cout << str << endl;
        cout << "Next string (q to quit): ";
    }
    cout << "Bye." << endl;

    return 0;
}