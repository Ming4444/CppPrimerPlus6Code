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
    CandyBar snack = {"Mocha Munch",2.3,350};
    cout<<"logo: "<<snack.logo<<endl;
    cout<<"weight: "<<snack.weight<<endl;
    cout<<"calorie: "<<snack.calorie<<endl;

    return 0;
}
