#include <iostream>
using namespace std;
class M
{
protected:
    int m;

public:
    void get_m(int a)
    {
        m = a;
    }
};
class N
{
protected:
    int n;

public:
    void get_n(int b)
    {
        n = b;
    }
};

class P : public M, public N
{
public:
    void display()
    {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
        cout << "m*n = " << m * n << endl;
    }
};
int main()
{
    class P p;
    p.get_m(10);
    p.get_n(20);
    p.display();
}