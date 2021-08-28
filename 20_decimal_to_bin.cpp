#include <bits/stdc++.h>
using namespace std;

long long cdtb(int);

int main()
{
    int n, binaryNumber;

    cout << "\nEnter any decimal number :: ";
    cin >> n;
    binaryNumber = cdtb(n);

    cout <<"\n [ " << n << " ] in decimal = [ " << binaryNumber << " ] in binary" << endl ;
    return 0;
}

long long cdtb(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
         n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}