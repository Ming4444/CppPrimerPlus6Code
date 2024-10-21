#include <iostream>

using namespace std;

unsigned int fractorial_func(int num);

int main ()
{
    int number = 0;
    cout<<"Enter the number you want(q to quit):"<<endl;
    while (cin>>number)
    {
        cout<<"The fractorial result is "<<fractorial_func(number)<<endl;
        cout<<"Next number: ";
    }
    cout<<"quit...."<<endl;
    return 0;
}

unsigned int fractorial_func(int num)
{
    int temp = num;
    if(num<=1)
        return 1;
    else
    {
        num--;
        return temp*fractorial_func(num);
    }
}