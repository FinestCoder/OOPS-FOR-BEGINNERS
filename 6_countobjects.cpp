#include <iostream>
using namespace std;
int countobj = 0;
class alpha
{
public:
    alpha()
    {
        countobj++;
        cout << "No of objects created :" << countobj << endl;
    }
    ~alpha()
    {
        cout << "The no of object destroyed :" << countobj << endl;
        countobj--;
    }
};
int main()
{
    cout << "\n \n Enter main \n";
    alpha A1, A2, A3, A4;
    {
        cout << "\n \n Block 1 \n";
        alpha A5;
    }
    {
        cout << "\n \n Block 2 \n";
        alpha A6;
    }
    cout << "\n \n Return main \n";
    return 0;
}