#include <iostream>

using namespace std;

typedef struct candybar
{
    string logo;
    double weight;
    int calorie;
}CandyBar;

int main()
{
    CandyBar snack[3];
    for (size_t i = 0; i < 3; i++)
    {
        snack[i].logo = "Mocha Munch";
        snack[i].weight = rand()/3.3+i;
        snack[i].calorie = rand()%500+1;
    }
    for (size_t i = 0; i < 3; i++)
    {
        cout<<"logo"<<i<<": "<<snack[i].logo<<endl;
        cout<<"weigh"<<i<<": "<<snack[i].weight<<endl;
        cout<<"calorie"<<i<<": "<<snack[i].calorie<<endl;
    }

    return 0;
}
