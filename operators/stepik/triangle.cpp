#include <iostream>

using namespace std;

/*
Даны три натуральных числа A, B, C. Определите, существует ли треугольник с такими сторонами. 
Если треугольник существует, выведите строку YES, иначе выведите строку NO.
Треугольник — это три точки, не лежащие на одной прямой.

Формат входных данных
    Вводятся три числа.
*/

void isTrianglePossible(int a, int b, int c)
{
    if(a + b > c && a + c > b && b + c > a)
    {
        cout << "YES" << endl;
    } 
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    isTrianglePossible(a,b,c);
}