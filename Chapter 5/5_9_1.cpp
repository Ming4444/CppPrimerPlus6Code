#include <iostream>

using namespace std;

int main()
{
    int num1 = 0, num2 = 0;
    int sum = 0;
    cout<<"Enter two integer: ";
    cin>>num1>>num2;

    for (size_t i = num1; i <= num2; i++)
    {
        sum+=i;
    }
    cout<<"summary is: "<<sum<<endl;
}