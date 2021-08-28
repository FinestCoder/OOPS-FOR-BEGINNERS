#include <iostream>
using namespace std;
class space
{
    int x, y, z;

public:
    void getdata(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << x << " ";
        cout << y << " ";
        cout << z << " ";
        cout << endl;
    }
    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};
int main()
{
    space S;
    S.getdata(10, -20, 30);
    S.display();
    // -S;
    S.operator-(); // Either write -S; or this
    S.display();
}