#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;  //
    fout.open("Country"); // create as well as open;

    fout << "India\n";
    fout << "Vietnam\n";
    fout << "Nepal\n";

    fout.close();

    fout.open("Capital");

    fout << "New Delhi\n";
    fout << "Hanoi\n";
    fout << "Katmandu\n";

    fout.close();

    int n = 80;
    char line[n];

    ifstream fin;
    fin.open("Country");

    cout << "Contents of country file is\n";

    while (fin)
    {
        fin.getline(line, n);
        cout << line << endl;
    }

    fin.close();

    fin.open("Capital");

    cout << "Contents of file captial is\n";

    while (fin)
    {
        fin.getline(line, n);
        cout << line << endl;
    }

    fin.close();

    return 0;
}