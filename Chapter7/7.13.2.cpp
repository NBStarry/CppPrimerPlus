#include <iostream>
using namespace std;

int InputGolfScore(int *, int);
void ShowGolfScore(const int *, int);
void AverageGolfScore(const int *, int);

int main()
{
    int golfScore[10];
    int size = InputGolfScore(golfScore, 10);
    ShowGolfScore(golfScore, size);
    AverageGolfScore(golfScore, size);

    return 0;
}

// return the number of input
int InputGolfScore(int *golfScore, int length)
{
    int score, i = 0;
    while(cin >> score && i < length)
    {
        golfScore[i++] = score;
    }

    return i;
}

void ShowGolfScore(const int *golfScore, int length)
{
    for(int i=0; i<length; i++)
    {
        cout << golfScore[i] << " ";
    }
    cout << endl;
}

void AverageGolfScore(const int *golfScore, int length)
{
    int sum = 0;
    for(int i=0; i<length; i++)
    {
        sum += golfScore[i];
    }
    cout << double(sum) / double(length) << endl;
}