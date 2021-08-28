#include <iostream>
#include <fstream>

using namespace std;
//OFSTREM IS FOR WRITING
//IF STREAM IS FOR READING

//These terms are respect to this program (compiler) memory

int main()
{
    ofstream outf("ITEM");

    cout << "Enter the item name" << endl;
    char name[30];
    cin >> name;

    outf << name << endl;

    cout << "Enter the item cost" << endl;
    float cost;
    cin >> cost;

    outf << cost << endl;

    outf.close();   //closing file

    ifstream inf("ITEM");

    inf >> name;
    inf >> cost;

    cout << endl;
    cout << "Item name: " << name << endl;
    cout << "Item cost: " << cost << endl;

    inf.close();

    return 0;
}