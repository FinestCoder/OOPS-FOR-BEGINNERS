#include <iostream>
using namespace std;
class Complex
{
    float x;
    float y;

public:
    Complex()
    {
    }
    Complex(float real, float imag)
    { //Parametrized Constructor
        x = real;
        y = imag;
    }
    void display()
    {
        cout << x << " +j" << y << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
};

int main()
{
    Complex C1(2.5, 3.5);
    Complex C2(1.6, 2.7);
    Complex C3 = C1 + C2; //C1 is implicitly passed   C2 is explicitly passed

    //C3=C1.opertor(C2) could also have been written

    cout << "C1" << endl;
    C1.display();
    cout << "C2" << endl;
    C2.display();
    cout << "C3" << endl;
    C3.display();
}
