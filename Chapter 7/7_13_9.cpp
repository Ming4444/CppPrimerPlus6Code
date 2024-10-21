#include <iostream>

const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main()
{
    using namespace std;
    cout<<"Ener class size: ";
    int class_size;
    cin >> class_size;
    while(cin.get()!='\n')
        continue;

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu,class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete[]ptr_stu;
    cout<<"Done\n";
    return 0;    
}

int getinfo(student pa[], int n)
{
    using namespace std;
    int num;
    for (num = 0; num < n; num++,pa++)
    {
        cout<<"Enter fullname: ";
        cin>>pa->fullname;
        while(cin.get()!='\n')
            continue;
        cout<<"Enter hobby: ";
        cin>>pa->hobby;
    }
    return num;
}

void display1(student st)
{
    using namespace std;
    cout<<"---------------Student Info1---------------\n";
    cout<<"Name: "<<st.fullname<<endl;
    cout<<"Hobby: "<<st.hobby<<endl;
}

void display2(const student * ps)
{
    using namespace std;
    cout<<"---------------Student Info2---------------\n";
    cout<<"Name: "<<ps->fullname<<endl;
    cout<<"Hobby: "<<ps->hobby<<endl;
}

void display3(const student pa[], int n)
{
    using namespace std;
    cout<<"---------------Student Info3---------------\n";
    for (int i = 0; i < n; i++,pa++)
    {
        cout<<"Name"<<i<<": "<<pa->fullname<<endl;
        cout<<"Hobby"<<i<<": "<<pa->hobby<<endl;
    }
}
