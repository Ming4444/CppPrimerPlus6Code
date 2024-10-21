#include <iostream>

double reverse_average(double num1, double num2);
using namespace std;

int main()
{
    double num1 = 0, num2 = 0, result = 0;
    cout<<"Enter two numbers: ";
    while (cin>>num1>>num2 && num1!=0 && num2!=0)
    {
        cin.get();
        result = reverse_average(num1,num2);
        cout<<"Result: "<<result<<endl;
        cout<<"Enter two numbers: ";
    }
    cout<<"quit.."<<endl;
}

double reverse_average(double num1, double num2)
{
    return 2.0*num1*num2/(num1+num2);
}
