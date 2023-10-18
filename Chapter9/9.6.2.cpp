// static.cpp -- using a static local variable
#include <iostream>
#include <string>
// constants
// const int ArSize = 10;

// function prototype
// void strcount(const char * str);

int main()
{
    using namespace std;
    string input;
    char next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (cin && input != "")
    {
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }
    cout << "Bye\n";
}
// // code to keep window open for MSVC++
// /*
// cin.clear();
//     while (cin.get() != '\n')
//         continue;
//     cin.get();
// */
//     return 0;
// }

// void strcount(const char * str)
// {
//     using namespace std;
//     static int total = 0;        // static local variable
//     int count = 0;               // automatic local variable

//     cout << "\"" << str <<"\" contains ";
//     while (*str++)               // go to end of string
//         count++;
//     total += count;
//     cout << count << " characters\n";
//     cout << total << " characters total\n";
// }
