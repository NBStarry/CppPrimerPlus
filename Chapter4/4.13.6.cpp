#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calories;
};

int main()
{
    CandyBar snack[3];
    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Mocha Munch", 2.3, 350};
    snack[2] = {"Mocha Munch", 2.3, 350};

    cout << "Brand: " << snack[0].brand << endl;
    cout << "Weight: " << snack[0].weight << endl;
    cout << "Calories: " << snack[0].calories << endl;

    cout << "Brand: " << snack[1].brand << endl;
    cout << "Weight: " << snack[1].weight << endl;
    cout << "Calories: " << snack[1].calories << endl;

    cout << "Brand: " << snack[2].brand << endl;
    cout << "Weight: " << snack[2].weight << endl;
    cout << "Calories: " << snack[2].calories << endl;

    return 0;
}