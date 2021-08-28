#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if (x == 0)
            throw x;
        if (x == -1)
            throw 'x';
        if (x == 1)
            throw 1.0;
    }
    catch (...)         // The 3 dots imply it is able to catch multiple throwing exceptions
    {
        cout << "Caught all runtime error" << endl;
    }
}
int main()
{
    cout << "Generic Catch" << endl;
    test(-1);
    test(0);
    test(1);

    return 0;
}