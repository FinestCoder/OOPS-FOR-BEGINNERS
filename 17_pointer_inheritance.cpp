//pointer along with inheritance
#include <iostream>
using namespace std;
class BC
{
public:
    int b;
    void show()
    {
        cout << "b = " << b << "\n";
    }
};
class DC : public BC
{
public:
    int d;
    void show()
    {
        cout << " b = " << b << "\n";
        cout << " d = " << d << "\n";
    }
};

int main()
{
    BC *bptr; //base class pointer bptr
    BC base;  //object of BC class
    bptr = &base;
    bptr->b = 100;
    cout << "bptr is pointing to base object" << endl;
    bptr->show();

    DC derived; //derived is object of class DC
    bptr = &derived;
    bptr->b = 200;
    //bptr-> d = 300;   This is not possible cause base class doesnt has d
    cout << "bptr now points to dervied class object" << endl;
    bptr->show();
    
    //Accessing Derived class contents through a Base class pointer
    DC *dptr;
    dptr=&derived;
    dptr->d=300;
    cout<<"dptr is derived type pointer";
    dptr->show();
    //accessing DC content using bptr (Type casting is reqd)
    ((DC*)bptr)->d=400;
    ((DC*)bptr)->show();

    return 0;
}
