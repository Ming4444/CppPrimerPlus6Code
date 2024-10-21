#include <iostream>
#include <vector>

using namespace std;

uint64_t sells_status_per_years(int *selling);

const int k_years = 3;
const int k_months = 12;
int main()
{
    vector<string>months = {"January","Feburary","March","April","May","June","July","August","Semptember","October","November","December"};
    int selling[k_years][k_months];
    uint64_t input = 0, total_sells = 0, one_year_sells = 0;

    for (size_t i = 0; i < k_years; i++)
    {
        for (size_t j = 0; j < k_months; j++)
        {
            cout<<"The selling status in "<<i+1<<"th year "<<months.at(j)<<": ";
            cin>>input;
            selling[i][j]=input;
        }
        one_year_sells = sells_status_per_years(selling[i]);
        cout<<"Selling number in "<<i+1<<"th year is "<<one_year_sells<<endl;
        total_sells += one_year_sells;
    }
    cout<<"Selling number of "<<k_years<<" years is "<<total_sells<<endl;

    return 0;
}

uint64_t sells_status_per_years(int *selling)
{
    uint64_t sum = 0;
    for (size_t i = 0; i < k_months; i++)
    {
        sum+=*selling;
        selling++;
    }
    return sum;
}