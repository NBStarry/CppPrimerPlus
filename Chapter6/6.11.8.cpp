#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream inFile;
    inFile.open("6.11.8.txt");
    if (!inFile.is_open())
    {
        exit(EXIT_FAILURE);
    }
    char ch;
    int count = 0;
    while (inFile >> ch)
    {
        count++;
    }
    cout << count << " characters in file" << endl;
    inFile.close();
    
    return 0;
}