#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter value of a and b"
         << endl;
    cin >> a >> b;
    int x = a - b;
    try
    {
        if (x != 0)
        {
            cout << "Result (a/x) = " << a / x << endl;
        }
        else
        {
            throw(x);
        }
    }
    catch (int i)
    {
        cout << "Exception Caught" << endl;
    }
    cout << "END";

    return 0;
}