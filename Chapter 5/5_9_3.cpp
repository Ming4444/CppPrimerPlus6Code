#include <iostream>
#include <vector>

using namespace std;

uint64_t sum(vector<int>&num);

int main()
{
    vector<int>number;
    int input = 0;
    
    do
    {
        cout<<"Enter number(if '0' exit): ";
        cin>>input;
        if(input!=0)
        {
            number.push_back(input);
            cout<<"Number sum is: "<<sum(number)<<endl<<endl;
        }
        else
        {
            cout<<"exit"<<endl;
        }
        
    } while (input!=0);

    return 0;
}

uint64_t sum(vector<int>&num)
{
    uint64_t sums = 0;
    for (size_t i = 0; i < num.size(); i++)
    {
        sums+=num.at(i);
    }
    return sums;
}