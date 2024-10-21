#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void timer(int minutes, int hours);

int main()
{
    int minutes = 0;
    int hours = 0;
    cout<<"Enter the number of hours: ";
    cin>>hours;
    cout<<"Enter the number of minutes: ";
    cin>>minutes;

    timer(minutes,hours);

    return 0;
}

void timer(int minutes, int hours)
{
    cout<<"Time: "<<hours<<":"<<minutes<<endl;
}