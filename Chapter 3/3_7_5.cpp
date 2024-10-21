#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    long long world_population = 0;
    long long china_population = 0;
    cout<<"Enter the world's population: ";
    cin>>world_population;
    cout<<"Enter the china's population: ";
    cin>>china_population;
    
    double percent = china_population/world_population*100.0;
    
    cout<<"The population of China is "<<percent<<"% of the world population"<<endl;

    return 0;
}