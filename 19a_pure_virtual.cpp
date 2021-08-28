#include <iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout << " \n Displaying Base " << endl;
    }
  virtual void show() = 0;  //From previous Program, This has been changed
};                          //This indicates it is a Pure Virtual Function

class Derived : public Base
{
public:
    void display()
    {
        cout << " \n Displaying Derived " << endl;
    }
    void show()
    {
        cout << "\n showing derived" << endl;
    }
};
int main()
{
    Derived D;
    Base *bptr;
    bptr->display();
    cout << "bptr is pointing dervied class" << endl;
    bptr = &D;
    bptr->display();
    bptr->show();
}
