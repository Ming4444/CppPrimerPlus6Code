#include <iostream>
#include <vector>

using namespace std;
void golf_grade_input(vector<double>&vec);
double golf_average(vector<double>&vec);
void golf_show(vector<double>&vec);

int main()
{
    vector<double>grade;
    cout<<"Enter golf grade(at most 10 numbers, 'q' to end input):\n";
    golf_grade_input(grade);
    golf_show(grade);
    return 0;
}

void golf_grade_input(vector<double>&vec)
{
    double input = 0;
    while (cin>>input)
    {
        vec.push_back(input);
    }
}

double golf_average(vector<double>&vec)
{
    double sum = 0;
    int num = vec.size();
    for (size_t i = 0; i < num; i++)
    {
        sum+=vec[i];
    }
    return 1.0*sum/num;
}

void golf_show(vector<double>&vec)
{
    double avr = 0;
    avr = golf_average(vec);
    cout<<"All grades: ";
    for (size_t i = 0; i < vec.size(); i++)
    {
       cout<<vec[i]<<" ";
    }
    cout<<endl<<"Average: "<<avr<<endl;
}