#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if (x == 1)
        {
            throw x;
        }
        else if (x == 0)
        {
            throw 'x';  //x is a character in this
        }
        else if (x == -1)
        {
            throw 1.0;
        }
    }
    catch (char c)
    {
        cout << "Caught a char" << endl;
    }
    catch (int m)
    {
        cout << "Caught a integer" << endl;
    }
    catch (double m)
    {
        cout << "Caught a double" << endl;
    }
    cout << "End of try catch" << endl;
}

int main()
{
    cout << "x==1" << endl;
    test(1);
    cout << "x==0" << endl;
    test(0);
    cout << "x==-1" << endl;
    test(-1);
    cout << "x==2" << endl;
    test(2);

    return 0;
}