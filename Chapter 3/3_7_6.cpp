#include <iostream>

using std::cout;
using std::cin;
using std::endl;

double mile_and_gallon(double distance, double capacity);

int main()
{
    double mile = 0;
    double gallon = 0;
    cout<<"Enter the mile: ";
    cin>>mile;
    cout<<"Enter the gallon: ";
    cin>>gallon;
    
    cout<<"The mile of a gallon is "<<mile_and_gallon(mile, gallon)<<endl;

    return 0;
}

double mile_and_gallon(double distance, double capacity)
{
    return distance/capacity;
}