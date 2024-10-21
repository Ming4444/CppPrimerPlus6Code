#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int InchesToFeetFactor = 12;
    uint16_t height = 0;
    cout<<"Enter your __height: ";
    cin>>height;

    cout<<height<<"inches = "<<height/12.0<<"feet"<<endl;

    return 0;
}