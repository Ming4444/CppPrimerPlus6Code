/*
    模板的运用——具体化模板
    作用：为特定数据类型提供具体化的模板，当编译器找到与函数调用匹配的具体化定义时，将使用该定义，而不再寻找模板(具体化优先于模板)
    显式具体化：template<> void function<int>(int,int);
    显式实例化：template void function<int>(int,int);
    步骤：1.先创建模板；2.才可以具体化和实例化
*/
#include <iostream>
#include <cstring>

template<typename T>
T maxn(T*,int);
template<> const char* maxn<const char*>(const char**, int);

int main()
{
    using namespace std;
    int arrint[6] = {1,3,5,7,9,5};
    double arrdouble[4] = {1.1,2.2,3.3,4.4};
    const char *arrstring[5] = {"one","two","three","four","five"};   //指针数组——5个指针组成的数组

    cout<<"-----int-----"<<endl;
    cout<<"max:"<<maxn(arrint,6)<<endl;
    cout<<"-----double-----"<<endl;
    cout<<"max:"<<maxn(arrdouble,4)<<endl;
    cout<<"-----string-----"<<endl;
    cout<<"max:"<<(int *)maxn(arrstring,5)<<endl;   //直接打印char*显示的是字符串
    return 0;
}

template<typename T>
T maxn(T* arr, int num)
{
    T max = 0;
    for (size_t i = 0; i < num; i++)
    {
        if(max < *(arr+i))
            max = *(arr+i);
    }
    return max;
}

template<> const char* maxn<const char*>(const char** ptr, int num)
{
    int maxpos = 0;
    int maxlen = 0;
    for (size_t i = 0; i < num; i++)
    {
        if(maxlen < strlen(*(ptr+i)))
        {
            maxlen = strlen(*(ptr+i));
            maxpos++;
        }
    }
    return *(ptr+maxpos);
}