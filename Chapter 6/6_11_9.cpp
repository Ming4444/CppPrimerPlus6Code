#include <iostream>
#include <vector>
#include <fstream>

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
    ifstream fileread("6_11_9.txt");
    Donation *donator;
    if (fileread.is_open())
    {
        fileread>>number;
        fileread.get();
        donator = new Donation[number];
        for (size_t i = 0; fileread.good(); i++)
        {
            getline(fileread,donator[i].name);
            fileread>>donator[i].money;
            fileread.get();
        }    
    }
    else
        cout<<"open failed.."<<endl;
    fileread.close();
    list(donator,number);
    return 0;
}

void list(Donation *list, int num)
{
    cout<<"Grand Patrons:"<<endl;
    for (size_t i = 0; i < num; i++)
    {
        if(list[i].money>10000)
        {
            cout<<list[i].name<<" "<<list[i].money<<endl;
        }
    }
    cout<<"Patrons:"<<endl;
    for (size_t i = 0; i < num; i++)
    { 
        if(list[i].money<=10000)
        {
            cout<<list[i].name<<" "<<list[i].money<<endl;
        }
    }
}