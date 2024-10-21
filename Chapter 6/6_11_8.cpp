#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int symbol_num = 0;
    char symbol = 0;
    ifstream file_read;
    file_read.open("6_11_8.txt");
    if(file_read.is_open())
    {
        while(file_read.good())
        {
            file_read.get(symbol);
            symbol_num++;
        }
    }
    else
        cout<<"open failed..."<<endl;
    file_read.close();
    symbol_num--;
    cout<<"The number of symbols in this file is "<<symbol_num<<endl;
    return 0;
}