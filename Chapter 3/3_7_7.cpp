#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double fuel_consumption_style_translate(double fuel_consumption);

int main()
{
    double fuel_consumption = 0;
    cout<<"Enter the fuel consumption: ";
    cin>>fuel_consumption;
    
    cout<<"The FC of USA style is "<<fuel_consumption_style_translate(fuel_consumption)<<" mpg"<<endl;

    return 0;
}

double fuel_consumption_style_translate(double fuel_consumption)
{
    const double Kilo100ToMile = 62.14;
    const double GallonToLiter = 3.875;

    double mpg = Kilo100ToMile/(fuel_consumption/GallonToLiter);

    return mpg;
}