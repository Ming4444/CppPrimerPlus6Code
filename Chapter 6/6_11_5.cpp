#include <iostream>
#include <cctype>
#include <math.h>

using namespace std;

double check_input_if_is_number(string input);

int main()
{
    double salary = 0, tax = 0;
    string input;
    cout<<"Enter your income: ";
    getline(cin,input);
    salary = check_input_if_is_number(input);
    while (salary>0)
    {
        if(salary<=5000)
            cout<<"The income tax is 0"<<" tvarps"<<endl;
        else if(salary<=15000)
        {
            tax = (salary-5000)*0.1;
            cout<<"The income tax is "<<tax<<" tvarps"<<endl;
        }
        else if(salary<=35000)
        {
            tax = (salary-15000)*0.15+10000*0.1;
            cout<<"The income tax is "<<tax<<" tvarps"<<endl;
        }
        else
        {
            tax = (salary-35000)*0.2+20000*0.15+10000*0.1;
            cout<<"The income tax is "<<tax<<" tvarps"<<endl;
        }
        cout<<"Enter your income: ";
        getline(cin,input);
        salary = check_input_if_is_number(input);
    }
    cout<<"Done!"<<endl;
    return 0;
}

double check_input_if_is_number(string input)
{
    double num = 0;
    int integer = 0, decimal = 0;
    int decimal_right_beside = 0;//小数点右边有几位
    for (int i = input.length()-1; i >= 0; i--)
    {
        if(input[i]=='.')
            break;
        decimal_right_beside++;
    }
    decimal = decimal_right_beside;
    for (int i = input.length()-1; i >= 0; i--)
    {
        if (isdigit(input[i])&&i<=(input.length()-1-decimal_right_beside-1))
        {
            num+=(input[i]-48)*pow(10,integer);
            integer++;
        }
        else if(isdigit(input[i]))
        {
            num+=(input[i]-48)*pow(10,-1*decimal);
            decimal--;
        }
        else if(input[i]=='.')
            continue;
        else
            return 0;
    }
    return num;
}