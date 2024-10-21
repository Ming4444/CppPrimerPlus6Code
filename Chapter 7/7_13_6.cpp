#include <iostream>

using namespace std;

int Fill_array(double *arr, int len);
void Show_array(double *arr, int len);
void Reverse_array(double *arr, int len);

int main()
{
    const int k_len = 10;
    double arr[k_len] = {0};
    int inputNum = 0;
    cout<<"Enter some number into array(at most 10 numbers, q to quit):\n";
    inputNum = Fill_array(arr,k_len);
    cout<<"The number of input is "<<inputNum<<endl;
    Show_array(arr,inputNum);
    Reverse_array(arr,inputNum);
    Show_array(arr,inputNum);
    return 0;
}

int Fill_array(double *arr, int len)
{
    int input_num = 0;
    while (input_num<len && cin>>arr[input_num])
    {
        input_num++;
    }
    return input_num;
}

void Show_array(double *arr, int len)
{
    cout<<"Array: ";
    for (size_t i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Reverse_array(double *arr, int len)
{
    int left = 1;
    int right = len-2;
    double temp = 0;
    while(left<=right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}