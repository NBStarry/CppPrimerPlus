#include <iostream>
using namespace std;

int main()
{
    const int FootToInch = 12;
    int height;

    cout << "Please enter your height in inch: ____\b\b\b\b";
    cin >> height;
    cout << "Your height is " << height / FootToInch << " foot and " << height % FootToInch << " inch." << endl;
    return 0;
}