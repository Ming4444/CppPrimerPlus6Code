#include <iostream>
#include <vector>

using namespace std;

typedef struct donation
{
    string name;
    double money;
}Donation;

void list(Donation *list, int num);

int main()
{
    int number = 0;
    cout<<"The number of donators: ";
    cin>>number;
    cin.get();
    Donation *donator = new Donation[number];
    for (size_t i = 0; i < number; i++)
    {
        cout<<"Enter donator"<<i+1<<"'s name: ";
        getline(cin,donator[i].name);
        cout<<"Enter donator"<<i+1<<"'s money: ";
        cin>>donator[i].money;
        cin.get();
    }
    cout<<endl;
    list(donator,number);
    return 0;
}

void list(Donation *list, int num)
{
    vector<string>name;
    vector<double>money;
    int grand_patrons_num = 0;
    for (size_t i = 0; i < num; i++)
    {
        if(list[i].money>10000)
        {
            name.push_back(list[i].name);
            money.push_back(list[i].money);
            grand_patrons_num++;
        }
    }
    for (size_t i = 0; i < num; i++)
    {
        if(list[i].money<=10000)
        {
            name.push_back(list[i].name);
            money.push_back(list[i].money);
        }
    }
    for (size_t i = 0; i < num; i++)
    { 
        if(i<grand_patrons_num)
        {
            if(i==0)cout<<"Grand Patrons:"<<endl;
            cout<<list[i].name<<" "<<list[i].money<<endl;
        }
        else
        {
            if(i==grand_patrons_num)cout<<"Patrons:"<<endl;
            if(list[i].money>0)cout<<list[i].name<<" "<<list[i].money<<endl;
            else cout<<"none"<<endl;
        } 
    }
}