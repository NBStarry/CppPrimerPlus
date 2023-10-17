#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string name;
    double weight;
    int calorie;
};

void SetCandyBar(CandyBar &cb, const char *name = "Millennium Munch", double weight = 2.85, int calorie = 350)
{
    cb.name = name;
    cb.weight = weight;
    cb.calorie = calorie;
}

void ShowCandyBar(const CandyBar &cb)
{
    cout << "Name: " << cb.name << endl;
    cout << "Weight: " << cb.weight << endl;
    cout << "Calorie: " << cb.calorie << endl;
}

int main()
{
    CandyBar candyBar;
    cout << "A Random CandyBar: " << endl;
    ShowCandyBar(candyBar);
    SetCandyBar(candyBar);
    cout << "A New CandyBar: " << endl;
    ShowCandyBar(candyBar);
    return 0;
}