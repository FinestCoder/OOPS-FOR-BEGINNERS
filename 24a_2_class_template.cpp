#include <iostream>
using namespace std;

template <class T, class Q>
Q add(T a, Q b) //If you write, T add(T a, Q b) then output is 7
{

    return a + b;
}


/* Basically its replaced as this 
 
 float add(int a, float b) 
 {
     return a + b;
 }
 
*/


int main()
{
    cout << add<int, float>(3, 4.1) << endl;

    return 0;
}
