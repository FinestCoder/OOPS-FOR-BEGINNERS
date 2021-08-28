#include <iostream>
using namespace std;

template <class TT>
class data
{
private:
    TT a;

public:
    data() {}

    data(TT v)
    {
        a = v;
    }

    void disp()
    {
        cout << a << endl;
    }
};

int main()
{
    data<int> d1(12);   //TT will be replaced by int
    d1.disp();

    data<float> d2(12.23);
    d2.disp();

    data<string> d3("Hello");
    d3.disp();

    return 0;
}
