#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Move
{
public:
    Move(double a=0, double b=0);
    void showmove() const;
    Move add(const Move& m) const;
    void reset(double a=0, double b=0);
private:
    double m_x;
    double m_y;
};

int main()
{
    Move m1(1,1);
    Move m2(2,2);
    Move m3 = m1.add(m2);
    cout<<"m1=> ";
    m1.showmove();
    cout<<"m2=> ";
    m2.showmove();
    cout<<"m3=> ";
    m3.showmove();
}

Move::Move(double a, double b)
{
    m_x = a;
    m_y = b;
}

void Move::showmove() const
{
    cout<<"current x: "<<m_x<<" | "<<"current y: "<<m_y<<endl;
}

Move Move::add(const Move& m) const
{
    Move newM(m_x+m.m_x,m_y+m.m_y);
    return newM;
}
void Move::reset(double a, double b)
{
    m_x = a;
    m_y = b;
}