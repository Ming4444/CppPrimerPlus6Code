#include <iostream>
#include <vector>

using namespace std;

int sells_status(vector<int>selling);

int main()
{
    vector<string>months = {"January","Feburary","March","April","May","June","July","August","Semptember","October","November","December"};
    vector<int>selling;
    int input = 0;

    for (size_t i = 0; i < months.size(); i++)
    {
        cout<<"The selling status in "<<months.at(i)<<": ";
        cin>>input;
        selling.push_back(input);
    }
    
    cout<<"Selling number in this year is "<<sells_status(selling)<<endl;

    return 0;
}

int sells_status(vector<int>selling)
{
    uint64_t sum = 0;
    for (size_t i = 0; i < selling.size(); i++)
    {
        sum+=selling.at(i);
    }
    return sum;
}