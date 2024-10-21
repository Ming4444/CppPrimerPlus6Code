/*
    定位new的使用
    此处定位到静态内存空间BUFF中
*/
#include <iostream>
#include <cstring>
#include <new>

using std::cout;
using std::cin;
using std::endl;

typedef struct chaff
{
    char dross[20];
    int slag;
}CHAFF;

void placement_new();
void normal_new();

char BUFF[50];

int main()
{
    cout<<"------------Placement New------------"<<endl;
    placement_new();
    cout<<"------------Normal New------------"<<endl;
    normal_new();
    return 0;
}

void placement_new()
{
    CHAFF *cf = new (BUFF) CHAFF[2];
    
    for (int i = 0; i < 2; i++)
    {
        strcpy(cf[i].dross,"dioxide");
        cf[i].slag = i;
    }
    cout<<"cf1 start address: "<<&cf[0]<<endl;
    cout<<"cf1.dross: "<<(void*)cf[0].dross<<endl;
    cout<<"cf1.slag: "<<&(cf[0].slag)<<endl;
    cout<<"===>"<<endl;
    cout<<"cf2 start address: "<<&cf[1]<<endl;
    cout<<"cf2.dross: "<<(void*)cf[1].dross<<endl;
    cout<<"cf2.slag: "<<&(cf[1].slag)<<endl;

    //此处不使用delete，因为delete只对应常规new的堆内存空间，而BUFF为静态内存空间，delete无效
}

void normal_new()
{
    CHAFF *cf = new CHAFF[2];
    for (int i = 0; i < 2; i++)
    {
        strcpy(cf[i].dross,"dioxide");
        cf[i].slag = i;
    }
    cout<<"cf1 start address: "<<&cf[0]<<endl;
    cout<<"cf1.dross: "<<(void*)cf[0].dross<<endl;
    cout<<"cf1.slag: "<<&(cf[0].slag)<<endl;
    cout<<"===>"<<endl;
    cout<<"cf2 start address: "<<&cf[1]<<endl;
    cout<<"cf2.dross: "<<(void*)cf[1].dross<<endl;
    cout<<"cf2.slag: "<<&(cf[1].slag)<<endl;

    delete[]cf;//delete[]对应new[]，delete对应new
}

