#include <iostream>
using namespace std;

// finding the area and perimeter of a rectangle using classes & objects

class rectangle
{
private:
    int length;
    int breadth;
    int area;
    int perimeter;

public:
    void area1();
    void peri();
    void getdata(int l, int b);
    void disp();
};

void rectangle::area1()
{
    area = length * breadth;
}
void rectangle::peri()
{
    perimeter = (2 * (length + breadth));
}
void rectangle::getdata(int l, int b)
{

    length = l;
    breadth = b;
}
void rectangle::disp()
{
    cout << "The length is " << length << endl;
    cout << "The breadth is " << breadth << endl;
    cout << "The area is " << area << endl;
    cout << "The perimeter is " << perimeter << endl;
}

int main()
{
    int l, b;
    cout << "Enter the length of rectangle ";
    cin >> l;
    cout << "Enter the breadth of rectangle ";
    cin >> b;
    rectangle r1;

    r1.getdata(l, b);
    r1.area1();
    r1.peri();
    r1.disp();
    return 0;
}