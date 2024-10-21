#include <iostream>
#include <vector>

using namespace std;

double interest(double money,string interest_style);

int main()
{
    double cleo_money = 100;
    double daphne_origin = 100;
    double daphne_money = 100;
    int years = 0;
    
    while (cleo_money<=daphne_money)
    {
        cleo_money+=interest(cleo_money,"compoud");
        daphne_money+=interest(daphne_origin,"simple");
        years++;
    }
    cout<<"after "<<years<<" years, Cleo haves "<<cleo_money<<"$, Daphne haves "<<daphne_money<<"$"<<endl;

    return 0;
}

double interest(double money,string interest_style)
{
    if(interest_style=="compoud")
    {
        return money*0.05;
    }
    else if(interest_style=="simple")
    {
        return money*0.1;
    }
    else
    {
        cout<<"wrong interest"<<endl;
        return 0;
    }
}