#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int DegreesToMinutes = 60;
    const int MinutesToSeconds = 60;
    double degrees = 0;
    int deg = 0;
    int minutes = 0;
    int seconds = 0;
    cout<<"First, enter the degrees: ";
    cin>>deg;
    cout<<"Next, enter the minutes of arc: ";
    cin>>minutes;
    cout<<"Finally, enter the seconds of arc: ";
    cin>>seconds;
    
    degrees = deg+1.0*(minutes+1.0*seconds/MinutesToSeconds)/DegreesToMinutes;
    cout<<deg<<" degrees, "<<minutes<<" minutes, "<<seconds<<" seconds = "<<degrees<<" degrees"<<endl;

    return 0;
}