#include <iostream>
using namespace std;

double HarmonicMean(int, int);

int main()
{
    int x, y;
    while(cin >> x >> y)
    {
        if(x == 0 || y == 0)
            break;
        cout << HarmonicMean(x, y) << endl;
    }

    return 0;
}

double HarmonicMean(int x, int y)
{
    return 2.0 * x * y / (x + y);
}