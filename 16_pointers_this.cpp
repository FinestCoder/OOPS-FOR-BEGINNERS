#include <iostream>
using namespace std;
class example
{
private:
    int i;

public:
    void setdata(int ii)
    {
        i = ii;       //one way of assigning value to data member
        cout << "\nMy object address is : " << this;
        this->i = ii; //another way of assigning value to data member
    }
    void showdata()
    {
        cout << endl;
        cout << i;          //One way to display
        cout << endl;
        cout << this->i;    //Another Way to display
        cout << endl;
        cout << "\nMy object address is : " << this;
    }
};
int main()
{
    example e1;
    e1.setdata(45);
    e1.showdata();
}