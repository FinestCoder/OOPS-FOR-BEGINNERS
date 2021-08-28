#include <bits/stdc++.h>
using namespace std;
template <class any>
any min_finder(any a[], int n)
{
    any key = a[0];
    for (int i = 0; i < n; i++)
    {
        if (key > a[i])
        {
            key = a[i];
        }
    }
    return key;
}
int main()
{
    char a[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << min_finder<char>(a, 5) << endl;
    int s[5] = {900, 15, 98, 32, 74};
    cout << min_finder<int>(s, 5);
}

/*
    #include<iostream>
using namespace std;
template <class T>
T minel(T arr[],int n){
    T small=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<small)
           small=arr[i];
    }
    return small;
}
int main(){
    char arr[10];
    int n;
    cout<<"size";
    cin>>n;
    cout<<"enter";
    for(int i=0;i<n;i++)
      cin>>arr[i];
    cout<<minel<char>(arr,n);
}
*/