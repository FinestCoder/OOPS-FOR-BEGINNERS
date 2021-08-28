#include <iostream>
using namespace std;
class code
{
    int id;

public:
    code()
    {
    }
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {
        id = x.id;
    }
    void display()
    {
        cout << id << endl;
    }
};
int main()
{
    code a(100), b(a), c = a;
    a.display();
    b.display();
    c.display();
    return 0;
}