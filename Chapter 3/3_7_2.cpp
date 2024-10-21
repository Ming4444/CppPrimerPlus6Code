#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int FeetToInchFactor = 12;
    const double InchesToMeterFactor = 0.0254;
    const double KiloToPoundFactor = 2.2;
    double bmi = 0;
    int inch = 0;
    int feet = 0;
    double pound = 0;
    cout<<"Enter your height about feet: ";
    cin>>feet;
    cout<<"Enter your height about inch: ";
    cin>>inch;
    cout<<"Enter your weight about pound: ";
    cin>>pound;

    bmi = pound/KiloToPoundFactor/((feet*FeetToInchFactor+inch)*InchesToMeterFactor*(feet*FeetToInchFactor+inch)*InchesToMeterFactor);
    cout<<"Your BMI is "<<bmi<<endl;

    return 0;
}