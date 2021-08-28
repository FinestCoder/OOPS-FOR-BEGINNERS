#include <iostream>
using namespace std;
void divide(int x, int y, int z)
{
    cout << "In fn Defn " << endl;
    if ((x - y) != 0)
    {
        int R = z / (x - y);
        cout << "Result = " << R << endl;
    }
    else
    {
        throw(x - y);
    }
}

int main()
{
    try
    {
        cout << "Try Block" << endl;
        divide(10, 20, 30);
        divide(10, 10, 20);
    }
    catch (int i)
    {
        cout << "Divide by zero" << endl;
    }

    return 0;
}