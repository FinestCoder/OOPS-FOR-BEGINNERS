#include <iostream>
using namespace std;
class Points
{
private:
    int w, d, l;

public:
    void getData();
    int calc(int w, int d, int l);
    int putData(int p);
};

void Points ::getData()
{
    cout << "Enter the number of wins, draws and loses of team" << endl;
    cin >> w >> d >> l;
    int p = calc(w, d, l);
    putData(p);
}
int Points::calc(int w, int d, int l)
{
    return 3 * w + d + 0 * l;
}
int Points::putData(int p)
{
    cout << "The total points for your team is " << p << endl;
    return 0;
}
int main()
{
    Points t1;
    t1.getData();
    return 0;
}