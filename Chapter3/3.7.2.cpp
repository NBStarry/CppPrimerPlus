#include <iostream>
using namespace std;

int main()
{
    const int FootToInch = 12;
    const float InchToMeter = 0.0254;
    const float PoundToKilogram = 2.2;

    int heightFoot, heightInch, weightPound;

    cout << "Please enter your height in foot and inch: _ __\b\b\b\b";
    cin >> heightFoot >> heightInch;
    cout << "Please enter your weight in pound: ___\b\b\b";
    cin >> weightPound;

    float heightMeter = (heightFoot * FootToInch + heightInch) * InchToMeter;
    float weightKilogram = weightPound * PoundToKilogram;
    float BMI = weightKilogram / (heightMeter * heightMeter);

    cout << "Your BMI is " << BMI << endl;

    return 0;
}