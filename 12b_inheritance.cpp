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
    void display()
    {
        cout << "class P" << endl;
        M::display();
    }
};
int main()
{
    class P p;
    p.display();
    p.M::display();
    p.N::display();
}