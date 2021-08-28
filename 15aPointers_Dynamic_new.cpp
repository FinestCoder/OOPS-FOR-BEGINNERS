#include <iostream>
using namespace std;
class item
{
    int code;
    float price;

public:
    void getdata(int a, float b)
    {
        code = a;
        price = b;
    }
    void show()
    {
        cout << "code is " << code << endl;
        cout << "price is " << price << endl;
    }
};
int main()
{   //Static allocation
    item x;
    item *ptr;
    ptr = &x;
    x.getdata(100, 75.50);
    x.show();
    ptr->getdata(200, 150.75);
    ptr->show();
    (*ptr).getdata(500, 300.12);
    (*ptr).show();
  
    //Dynamic allocation

        item *p=new item;
        p->getdata(500,25.5);
        p->show();
    
    return 0;
}