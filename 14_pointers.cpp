#include <iostream>
using namespace std;
int main()
{
    int a, *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;

    cout << "The address of a is : " << ptr1 << endl;
    cout << "The address of ptr 1 is : " << ptr2 << endl;

    cout << endl;

    cout << "Incrementing address" << endl;
    ptr1 = ptr1 + 2;
    cout << "The address of a is : " << ptr1 << endl;

    ptr2 = ptr2 + 2;
    cout << "The address of ptr 1 is : " << ptr2 << endl;

    return 0;
}