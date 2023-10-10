#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    do
    {
        cout << "Enter a number: ";
        cin >> num;
        sum += num;
        cout << "The sum is " << sum << endl;
    } while (num != 0);
    
    return 0;
}