#include <iostream>

using namespace std;
double filed_probability(int, int);
double special_probability(int);

int main()
{
    int filed_total = 0, special_total = 0;
    int choice = 0;
    cout<<"Enter the total filed number and your choice numbers:\n";
    while (cin>>filed_total>>choice)
    {
        cout<<"Enter the total special number:\n";
        cin>>special_total;
        cout<<"The probability you will win is "<<filed_probability(filed_total,choice)*special_probability(special_total)<<endl;
        cout<<"Enter the total filed number and your choice numbers:\n";
    }
    
}

double filed_probability(int total, int choice)
{
    double result = 1;
    while (choice>=1)
    {
        result*=(total--/choice--);
    }
    return 1.0/result;
}

double special_probability(int total)
{
    return 1.0/total;
}