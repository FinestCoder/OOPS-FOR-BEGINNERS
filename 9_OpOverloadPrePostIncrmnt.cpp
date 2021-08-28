#include <iostream>
using namespace std;
class Index
{
private:
    int count;

public:
    Index() //This is not a default constructor
    {
        count = 0;
    }
    Index(int i)
    {
        count = i;
    }
    Index operator++()
    {
        ++count;
        Index temp;
        temp.count = count;
        return temp;
    }
    int ShowData()
    {
        return count;
    }
};

int main()
{
    Index c, d;
    cout << "C is " << c.ShowData() << endl;
    ++c;                                            //c.operator++();
    cout << "C is " << c.ShowData() << endl;
    d = ++c;
    cout << "C is " << c.ShowData() << endl;
    cout << "D is " << d.ShowData() << endl;
    return 0;
}