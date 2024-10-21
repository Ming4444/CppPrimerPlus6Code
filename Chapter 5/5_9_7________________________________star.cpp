////////////
/*
    使用cin>>读取内容时，会忽略空格和换行符'\n'
    而getline则全部读取
    所以cin>>之后使用cin.get丢弃换行符'\n'，否则getline会先读取换行符
*/
////////////
#include <iostream>

using namespace std;

typedef struct Cars
{
    string manufacturer;
    int years;
}Cars;

int main()
{
    int num_of_cars = 0;
    cout<<"How many cars do you wish to catalog? ";
    cin>>num_of_cars;
    cin.get();

    Cars *my_cars = new Cars[num_of_cars];

    for (size_t i = 0; i < num_of_cars; i++)
    {
        cout<<"Car #"<<i+1<<":\nPlease enter the make: ";
        getline(cin,my_cars[i].manufacturer);
        cout<<"Please enter the year made: ";
        cin>>my_cars[i].years;
        cin.get();
    }
    cout<<endl<<"Here is your collection:"<<endl;
    for (size_t i = 0; i < num_of_cars; i++)
    {
        cout<<my_cars[i].years<<" "<<my_cars[i].manufacturer<<endl;
    }

    delete[]my_cars;
    return 0;
}