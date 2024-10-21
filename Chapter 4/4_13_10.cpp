#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int,3>grade;
    for (size_t i = 0; i < 3; i++)
    {
        cout<<"Enter the "<<i+1<<"th grade: ";
        cin>>grade.at(i);
    }
    cout<<"Average grade is: "<<double((grade.at(0)+grade.at(1)+grade.at(2))/3)<<endl;
    
    return 0;
}

