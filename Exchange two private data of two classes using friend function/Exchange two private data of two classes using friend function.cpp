#include<iostream>
using namespace std;
class number_2;
class number_1
{
private:
    int x;
public:
    void data_1(int);
    void display_1();
    friend void swap(number_1 s1, number_2 s2);
};
void number_1::data_1(int a)
{
    x = a;
}
void number_1::display_1()
{
    cout << x;
}
class number_2
{
private:
    int y;
public:
    void data_2(int);
    void display2();
    friend void swap(number_1 s1, number_2 s2);
};
void number_2::data_2(int b)
{
    y = b;
}
void number_2::display2()
{
    cout << y;
}
void swap(number_1 s1, number_2 s2)
{
    int t;
    t = s1.x;
    s1.x = s2.y;
    s2.y = t;
    cout << "Final values of class 1 after swapping (x) = " << s1.x;
    cout << endl;
    cout << "Final values of class 2 after swapping(y) = " << s2.y;
    cout << endl;
}
int main()
{
    int value_1;
    int value_2;
    cout << "Enter value of 'x' : ";
    cin >> value_1;
    cout << "Enter value of 'y' : ";
    cin >> value_2;
    number_1 f;
    number_2 s;
    f.data_1(value_1);
    s.data_2(value_2);
    cout << "Initial values of class 1 (x) = ";
    f.display_1();
    cout << endl;
    cout << "Initial values of class 2 (y) = ";
    s.display2();
    cout << endl;
    swap(f, s);
    return 0;
}