#include <iostream>
#include <string>
using namespace std;

void PrintString(const string &str, int n = 0)
{
    static int TimesPrintStringCalled = 0;
    if (n == 0)
    {
        cout << str << endl;
        TimesPrintStringCalled++;
    }
    else
    {
        cout << "PrintString have called " << TimesPrintStringCalled << " times." << endl;
        for (int i = 0; i < TimesPrintStringCalled; i++)
        {
            cout << str << endl;
        }
        TimesPrintStringCalled++;
    }
}

int main()
{
    string str = "Hello World!";
    PrintString(str);
    PrintString(str, 1);
    PrintString(str, 1);

    return 0;
}

