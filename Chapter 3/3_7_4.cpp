#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int DayToHours = 24;
    const int HoursToMinutes = 60;
    const int MinutesToSeconds = 60;
    unsigned int secondsTotal = 0;
    cout<<"Enter the number of seconds: ";
    cin>>secondsTotal;

    unsigned int seconds = secondsTotal%MinutesToSeconds;
    unsigned int minutes = secondsTotal/MinutesToSeconds%HoursToMinutes;
    unsigned int hours = secondsTotal/MinutesToSeconds/HoursToMinutes%DayToHours;
    unsigned int days = secondsTotal/MinutesToSeconds/HoursToMinutes/DayToHours;
    cout<<secondsTotal<<" seconds = "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds"<<endl;

    return 0;
}