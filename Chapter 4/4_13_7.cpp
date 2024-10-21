#include <iostream>

using namespace std;

typedef struct pizza
{
    string company;
    double weight;
    double diameter;
}Pizza;

int main()
{
    Pizza cake;
    cout<<"Enter company name: ";
    getline(cin,cake.company);
    cout<<"Enter diameter of pizza: ";
    cin>>cake.diameter;
    cout<<"Enter weight of pizza: ";
    cin>>cake.weight;

    cout<<endl;
    cout<<"The information of pizza: "<<cake.company<<", "<<cake.diameter<<"cm, "<<cake.weight<<"kg"<<endl;

    return 0;
}
