#include <iostream>
using namespace std;
class two;
class one
{
private:
    int i;

public:
    void getdata()
    {
        i = 10;
    }
    friend two;
};
class two
{
public:
    void fun1(one o)
    {
        cout << o.i << endl;
    }
    void fun2(one n)
    {
        cout << n.i << endl;
    }
};

int main()
{
    one a;
    two b;
    a.getdata();
    b.fun1(a);
    b.fun2(a);
    return 0;
}