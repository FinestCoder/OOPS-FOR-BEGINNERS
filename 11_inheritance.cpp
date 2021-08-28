#include <iostream>

using namespace std;

class student
{
protected:
    int roll_number;

public:
    void get_number(int a);
    void put_number();
};

class test : public student
{
protected:
    float sub1;
    float sub2;

public:
    void get_marks(float x, float y);
    void put_marks();
};

class result : public test
{
    float total;

public:
    void display();
};

    void student ::get_number(int a)
    {
    roll_number = a;
    }

    void student::put_number()
    {
    cout << "Roll Number is :" << roll_number << endl;
    }


    void test ::get_marks(float x, float y)
    {
    sub1 = x;
    sub2 = y;
    }

    void test::put_marks()
    {
    cout << "Sub1 marks is :" << sub1 << endl;
    cout << "Sub2 marks is :" << sub2 << endl;
    }

    
    void result::display()
    {
    total = sub1 + sub2;
    put_number();
    put_marks();
    cout << "total Marks is :" << total << endl;
    }

int main()
{
    result stu;
    stu.get_number(111);
    stu.get_marks(93.1, 86.0);
    stu.display();
    return 0;
}