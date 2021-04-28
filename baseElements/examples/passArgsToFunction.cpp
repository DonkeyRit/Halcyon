#include <iostream>

using namespace std;

// Передача параметра по указателю
void f1 (int *a)
{
    (*a)++;
}

// Передача параметра по ссылке
void f2 (int &a)
{
    a++;
}

void f3(int a, int *b, int &c)
{
    a += 10;
    (*b) += 10;
    c += 10;
    cout << "f3 : \t" << a << "\t" << *b << "\t" << c << endl;
}

int main()
{
    int x = 10, y = 20, z = 30;
    cout << "main : \t" << x << "\t" << y << "\t" << z << endl;
    f3(x, &y, z);
    cout << "main : \t" << x << "\t" << y << "\t" << z << endl;
    return 0;
}