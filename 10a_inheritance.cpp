#include <iostream>
using namespace std;
class B
{
    int a;

public:
    int b;
    void get_ab()
    {
        cout << "Enter the values of a and b:";
        cin >> a >> b;
    }
    int get_a()
    {
        return a;
    }
    void show_a()
    {
        cout << "a = " << a << endl;
    }
};
class D : private B
{
    int c;

public:
    void mul()
    {
        get_ab();
        c = b * get_a();
    }
    void display()
    {
        show_a();
        cout << "b = " << b << endl;
        cout << "c = " << c << endl;
    }
};
int main()
{
    D d;
    //d.get_ab(); // won't access
    d.mul();
    //d.show_a();//won't access
    d.display();
    //d.b = 20; ///won't access
    d.mul();
    d.display();
}