#include <iostream>

using namespace std;

int main()
{
    int rows = 0;
    cout<<"Enter number of rows: ";
    cin>>rows;

    for (size_t i = 1; i <= rows; i++)
    {
        for (size_t j = 1; j <= rows; j++)
        {
            if(j<=rows-i)
                cout<<".";
            else
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}