#include <iostream>
using namespace std;
class M
{
public:
    void display()
    {
        cout << "Class M" << endl;
    }
};
class N
{
public:
    void display()
    {
        cout << "Class N" << endl;
    }
};

class P : public M, public N
{
public:
    void display()   //Member function in derived class overwrites base class member fn
    {
        cout << "class P" << endl;
    }
};
int main()
{
    class P p;
    p.display();
}