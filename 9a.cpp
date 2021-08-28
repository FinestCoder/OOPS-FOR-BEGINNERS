#include <iostream>

using namespace std;

class Index
{
private:
    int count;

public:
    Index()
    {
        count = 0;
    }
    Index(int i)
    {
        count = i;
    }
    Index operator++()      //This is for pre increment
    {
        Index temp1;
        temp1.count = ++count;
        return temp1;
    }
    Index operator++(int)   //This is for post increment
    {
        Index temp2;
        temp2.count = count++;
        return temp2;
    }
    void showdata()
    {
        cout << count;
    }
};

int main()
{
    Index c, d, e, f;
    
     e = ++c;
    
    cout << endl<< " c=";
    c.showdata();
    
    cout << endl<< " e=";
    e.showdata();

    f = d++;
    cout << endl << " d=";
    d.showdata();

    cout << endl<< " f=";
    f.showdata();
    return 0;
}