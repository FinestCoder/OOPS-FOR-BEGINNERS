#include <iostream>
using namespace std;
int main()
{
    int num[] = {56, 75, 22, 18, 90};
    int *ptr;
    int i;
    cout << "the array values are :\n";
    for (i = 0; i <= 4; i++)
    {
        cout << num[i] << endl;
    }
    ptr = num;
    cout << "\nvalue of pointer : " << *ptr;
    cout << endl;
    ptr++;
    cout << "\nvalue of ptr++ :" << *ptr;
    cout << endl;
    ptr--;
    cout << "\nvalue of ptr-- :" << *ptr;
    cout << endl;
    ptr = ptr + 2;
    cout << "\nvalue of ptr+2 :" << *ptr;
    cout << endl;
    ptr = ptr - 1;
    cout << "\nvalue of ptr-1 :" << *ptr;
    cout << endl;
    ptr += 3;                                   //Compound assignment operator
    cout << "\nvalue of ptr+=3 :" << *ptr;
    cout << endl;
    ptr -= 2;
    cout << "\nvalue of ptr-=2 :" << *ptr;
    cout << endl;
    return 0;
}