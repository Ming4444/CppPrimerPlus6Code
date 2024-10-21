#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double>donation;
    double sum = 0, input = 0;
    int total = 0;
    cout<<"Enter donations: ";
    
    for (size_t i = 0; i<10 && cin>>input; i++)
    {
        donation.push_back(input);
        cout<<"Enter donations: ";
    }
    for (size_t i = 0; i < donation.size(); i++)
    {
        sum+=donation[i];
    }
    for (size_t i = 0; i < donation.size(); i++)
    {
        if(donation[i]>(sum/donation.size()))
            total++;
    }
    cout<<"There are "<<total<<" digit larger than average"<<endl;
    
    return 0;
}