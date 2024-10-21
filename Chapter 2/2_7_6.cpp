#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double astronomical(double light_years);

int main()
{
    double light_years = 0;
    cout<<"Enter the number of light years: ";
    cin>>light_years;

    cout<<light_years<<" light years is equal to "<<astronomical(light_years)<<" astronomical units"<<endl;

    return 0;
}

double astronomical(double light_years)
{
    double astron = light_years*63240;
    return astron;
}