#include <iostream>

using namespace std;

/*
Даны три целых числа. Определите, сколько среди них совпадающих. 
Программа должна вывести одно из чисел: 
    3 (если все совпадают), 
    2 (если два совпадает) или 
    0 (если все числа различны).

Формат входных данных
    Вводятся три числа.
*/

int main ()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    if (a == b && b == c)
    {
        cout << 3 << endl;
    }
    else if (a == b && b != c || a == c && c != b || b == c && c != a)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 0 << endl;
    }


    return 0;
}