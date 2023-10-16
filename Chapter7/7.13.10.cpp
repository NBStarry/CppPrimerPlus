#include <iostream>
using namespace std;
const int numCalculateFunc = 2;

typedef double (*PfArray[numCalculateFunc])(double, double);

double calculate(double x, double y, double (*pf)(double, double))
{
    return (*pf)(x, y);
}

double add(double x, double y)
{
    return x + y;
}

double minors(double x, double y)
{
    return x - y;
}

int main()
{
    double x, y;
    PfArray pfa = {add, minors};
    cout << "Enter two numbers: ";
    while(cin >> x >> y)
    {
        for(int i=0; i<numCalculateFunc; i++)
        {
            cout << calculate(x, y, pfa[i]) << endl;
        }
        cout << "Enter two numbers: ";
    }
    return 0;
}