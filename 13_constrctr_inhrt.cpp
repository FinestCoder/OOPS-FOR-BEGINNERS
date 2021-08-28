#include <iostream>
using namespace std;
class alpha
{
    int x;

public:
    alpha(int i)
    {
        x = i;
        cout << "Alpha Initialized" << endl;
    }
    void show_x()
    {
        cout << "x = " << x << endl;
    }
};
class beta
{
    float y;

public:
    beta(float j)
    {
        y = j;
        cout << "Beta Initialized" << endl;
    }
    void show_y()
    {
        cout << "y = " << y << endl;
    }
};
class Gamma : public beta, public alpha //Dont use 'gamma' as class name as its a keyword
{
    int m, n;

public:
    Gamma(int a, float b, int c, int d) : alpha(a), beta(b)
    {
        m = c;
        n = d;
        cout << "Gamma Initialized" << endl;
    }
    void show_mn()
    {
        cout << "m = " << m << endl;
        cout << "n = " << n << endl;
    }
};
int main()
{
    Gamma g(5, 10.75, 20, 30);
    cout << endl;
    g.show_x();
    g.show_y();
    g.show_mn();
    return 0;
}