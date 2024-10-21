#include <iostream>

template<typename T>
T max5(T*);

int main()
{
    using namespace std;
    int arrint[5] = {1,3,5,7,2};
    double arrdouble[5]= {1.6,3.5,5.9,4.7,1.2};
    cout<<"----------------int----------------"<<endl;
    cout<<"arrint[] = "<<arrint[0]<<" "<<arrint[1]<<" "<<arrint[2]<<" "<<arrint[3]<<" "<<arrint[4]<<endl;
    cout<<"arrint max = "<<max5(arrint)<<endl;
    cout<<"----------------double----------------"<<endl;
    cout<<"arrdouble[] = "<<arrdouble[0]<<"  "<<arrdouble[1]<<"  "<<arrdouble[2]<<"  "<<arrdouble[3]<<"  "<<arrdouble[4]<<endl;
    cout<<"arrdouble max = "<<max5(arrdouble)<<endl;
}

template<typename T>
T max5(T* arr)
{
    T max = 0;
    for (size_t i = 0; i < 5; i++)
    {
        if(max < *(arr+i)) max = *(arr+i);
    }
    return max;
}