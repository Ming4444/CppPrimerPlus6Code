#include <iostream>
#include <array>

using namespace std;
int main()
{
    const int Number = 100;
    array<int,Number>value;
    long double sum = 1;
    
    for (size_t i = 0; i < Number; i++)
    {
        value.at(i)=i+1;
    }
    for(int x:value)
    {
        sum*=x;
    }
    cout<<"100!: "<<sum<<endl;

    return 0;
}