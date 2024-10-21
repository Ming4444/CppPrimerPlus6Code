#include <iostream>

const int Max = 5;

double* fill_array(double ar[], int limit);
void show_array(double ar[], double* pos);
void revalue(double r, double ar[], double* pos);

int main()
{
    using namespace std;
    double properties[Max];

    double* pos = fill_array(properties,Max);
    show_array(properties,pos);
    if(*pos>=0)
    {
        cout<<"Enter revaluation factor: ";
        double factor;
        while(!(cin>>factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout<<"Bad input; Please enter a number: ";
        }
        revalue(factor,properties,pos);
        show_array(properties,pos);
    }
    cout<<"Done.\n";
    cin.get();
    cin.get();
    return 0;
}

double* fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i = 0;
    for (i = 0; i < limit; i++)
    {
        cout<<"Enter value #"<<(i+1)<<":";
        cin>>temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout<<"Bad input; Please enter a number: ";
            break;
        }
        else if(temp<0)
        {
            break;
        }
        ar[i] = temp;
    }
    return &ar[i];
}

void show_array(double ar[], double* pos)
{
    using namespace std;
    for(int i = 0; &ar[i]<pos; i++)
    {
        cout<<"Property #"<<(i+1)<<": $";
        cout<<ar[i]<<endl;
    }
}

void revalue(double r, double ar[], double* pos)
{
    for (int i = 0; &ar[i]<pos; i++)
    {
        ar[i]*=r;
    }
}