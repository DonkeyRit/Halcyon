#include <iostream>

using namespace std;

int a = 100, b = 20;

void f1(int a)
{
    a += 10;
    cout << "f1 : \t" << a << "\t" << ::a << endl;
}

void f2(int b)
{
    b *= 2;
    cout << "f2 : \t" << b << "\t" << ::b << endl;
}

int main()
{
    cout << "main : \t" << a << "\t" << b << endl;
    f1(a);
    f2(b);
    cout << "main : \t" << a << "\t" << b << endl;
}