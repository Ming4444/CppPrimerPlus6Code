/*
    C++编译器不允许引用一个非const类型的临时变量(临时变量随时可能被释放掉，所以一般说来，修改一个临时变量是毫无意义的)
    见operator+() ， operator=()的代码注释
*/
#include "12_10_2.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    String s1(" and I am a C++ student.");
    String s2 = "Please enter your name: ";
    String s3;
    cout<<s2;
    cin>>s3;
    s2 = "My name is " + s3;
    cout<<s2<<".\n";
    s2 = s2 + s1;
    s2.Stringup();
    cout<<"The string\n"<<s2<<"\ncontains "<<s2.has('A')<<" 'A' characters in it.\n";
    s1 = "red";
    String rgb[3] = {String(s1), String("green"), String("blue")};
    cout<<"Enter the name of a primary color for mixing light: ";
    String ans;
    bool success = false;
    while (cin>>ans)
    {
        ans.Stringlow();
        for (size_t i = 0; i < 3; i++)
        {
            if(ans == rgb[i])
            {
                cout<<"That's right!\n";
                success = true;
                break;
            }
        }
        if(success) break;
        else cout<<"Try again!\n";
    }
    cout<<"Bye.\n";
    return 0;
}

String::String(String& str)
{
    m_str = new char[strlen(str.m_str) + 1];
    strcpy(m_str,str.m_str);
}

String::String(const char* str)
{
    m_str = new char[strlen(str)+1];
    strcpy(m_str,str);
    m_len = strlen(m_str);
}

String::~String()
{
    delete[] m_str;
}

String operator+(const String& str1,  const String& str2)//---------------※※※※※※
/*
    s2 = "My name is " + s3;
    虽然传入的是const char*类型，编译器会先调用构造函数生成临时对象赋值给str1
    因为是临时对象，所以str1需要const修饰才能赋值
*/
{
    String temp; //没有声明默认构造函数却能用，是因为有默认形参String(const char* str = "")
    delete[] temp.m_str;
    temp.m_str = new char[strlen(str1.m_str) + strlen(str2.m_str) + 1];
    strcpy(temp.m_str,str1.m_str);
    strcat(temp.m_str,str2.m_str);
    temp.m_len = strlen(temp.m_str);
    return temp;
}

String& String::operator=(const String &str)//---------------※※※※※※
/*
    同理，operator+返回的String是编译器创建的临时对象，所以str需要const修饰
*/
{
    delete[] m_str; //这里先delete并不会出错，因为先调用默认构造函数，再赋值；而此处默认构造函数是String(const char* str = "")，在此函数中m_str已经new了一次
    m_str = new char[strlen(str.m_str) + 1];
    strcpy(m_str,str.m_str);
    m_len = strlen(m_str);
    return *this;
}

bool String::operator==(String& str)
{
    if(strlen(m_str) != strlen(str.m_str)) return false;
    for (int i = 0; i < strlen(m_str); i++)
    {
        if(m_str[i] != str.m_str[i]) return false;
    }
    return true;
}

std::ostream & operator<<(std::ostream& os, String& str)
{
    os<<str.m_str;
    return os;
}

std::istream & operator>>(std::istream& is, String& str)
{
    delete[] str.m_str;
    str.m_str = new char[100];
    is.getline(str.m_str,100,'\n');
    str.m_len = strlen(str.m_str);
    return is;
}

void String::Stringlow()
{
    for (size_t i = 0; i < m_len; i++)
    {
        m_str[i] = tolower(m_str[i]);
    }
}

void String::Stringup()
{
    for (size_t i = 0; i < m_len; i++)
    {
        m_str[i] = toupper(m_str[i]);
    }
}

int String::has(char c) const
{
    int num = 0;
    for (int i = 0; i < strlen(m_str); i++)
    {
        if(c == m_str[i])
            num++;
    }
    return num;
}