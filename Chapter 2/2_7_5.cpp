#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double fahrenheit(double celsius);

int main()
{
    double celsius = 0;
    cout<<"Enter Celsius value: ";
    cin>>celsius;

    cout<<celsius<<" degrees Celsius is equal to "<<fahrenheit(celsius)<<" degrees Fahrenheit"<<endl;

    return 0;
}

double fahrenheit(double celsius)
{
    double fah = celsius*1.8+32.0;
    return fah;
}