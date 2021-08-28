#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << add<int>(3, 4) << endl;
    cout << add<float>(3.1, 4.1) << endl;
    cout << add<string>("hello", "world") << endl;

    return 0;
}
