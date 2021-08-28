#include <iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout << " \n Displaying Base " << endl;
    }
    virtual void show()
    {
        cout << " \n showing Base" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << " \n Displaying Derived " << endl;
    }
    void show()
    {
        cout << "\n showing dervied" << endl;
    }
};
int main()
{
    Base B;
    Derived D;
    Base *bptr;
    cout << "bptr is pointing base class" << endl;
    bptr = &B;
    bptr->display();
    bptr->show();
    cout << "bptr is pointing derived class" << endl;
    bptr = &D;
    bptr->display();
    bptr->show();
    //Virtual implies, It seems like its there but its not there
    //This happens at the run time
    
    //You should write virtual only in the base class not in the derived class
    //If you have virtual function in the base class the same function should also be 
    //present in the derived class
}