#include <bits/stdc++.h>
using namespace std;

// throw(x);
// throw x;
// Both of them are same

//throw; //This means rethrow i.e. throw keyword without an object is rethrow

void divide(double x, double y)
{
    cout << "Inside Function" << endl;
    try
    {
        if (y == 0.0)
            throw y;    //after throw control goes to *immediate catch*
        else
            cout << "Division = " << x / y << endl;
    }
    catch (double d)    //can also write catch(double)
    {
        cout << "Caught Double inside function" << endl;
        throw;  //Rethrow imlplies control will then go to another catch which is outside of this function
                //Hence it will go to main's catch 
    }
    cout << "End of function" << endl;
}
int main()
{
    cout << "Inside Main" << endl;
    try
    {
        divide(10.5, 2.0);
        divide(20.0, 0.0);
    }
    catch (double x)
    {
        cout << "Caught Double inside main";
    }
    cout<<"End of main function"<<endl;
    return 0;
}