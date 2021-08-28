#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void get_number(int x)
    {
        roll_no = x;
    }
    void put_number()
    {
        cout << "Roll no is " << roll_no << endl;
    }
};

class Test : public Student
{
protected:
    float sub1, sub2;

public:
    void get_marks(float a, float b)
    {
        sub1 = a;
        sub2 = b;
    }
    void put_marks()
    {
        cout << "sub1 = " << sub1 << endl;
        cout << "sub2  = " << sub2 << endl;
    }
};

class sports
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score()
    {
        cout << "the score is " << score << endl;
    }
};

class result : public Test, public sports
{
    float total;

public:
    void display()
    {
        total = sub1 + sub2 + score;
        put_number();
        put_marks();
        put_score();
        cout << "The total score is " << total << endl;
    }
};

int main()
{
    result S1;
    S1.get_number(1111);
    S1.get_marks(91.1, 58.6);
    S1.get_score(9.9);
    S1.display();
    return 0;
}