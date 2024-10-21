#include <iostream>

int main()
{
    std::string name;
    std::string address;

    std::cout<<"Enter your name: ";
    std::cin>>name;
    std::cout<<"Enter your address: ";
    std::cin>>address;

    std::cout<<"\nName: "<<name<<std::endl<<"Address: "<<address<<std::endl;

    return 0;
}