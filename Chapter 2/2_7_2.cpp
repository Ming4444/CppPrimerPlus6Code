#include <iostream>

int main()
{
    long distance = 0;
    unsigned long yard = 0;

    std::cout<<"Enter a distance: ";
    std::cin>>distance;

    yard = distance*220;
    std::cout<<"It is equal to "<<yard<<" yard"<<std::endl;
}