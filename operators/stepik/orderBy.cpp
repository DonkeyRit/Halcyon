#include <iostream>

using namespace std;

/*
Дано три числа. Упорядочите их в порядке неубывания.

Формат входных данных
    Вводятся три числа.
Формат выходных данных
    Выведите ответ на задачу.
*/

int min(int a, int b)
{
    return (a < b)? a : b;
}

int max(int a, int b)
{
    return (a > b)? a : b;
}

int avg(int minValue, int maxValue, int checkValue)
{
    if(checkValue != minValue && checkValue != maxValue)
    {
        return checkValue;
    }
    return 0;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int minValue = min(a, min(b,c));
    int maxValue = max(a, max(b,c));

    int averageValue = avg(minValue, maxValue, a) + avg(minValue, maxValue, b) + avg(minValue, maxValue, c);
    if(averageValue == 0)
    {
        if(a == b)
        {
            averageValue = a;
        }
        else if (a == c)
        {
            averageValue = a;
        }
        else
        {
            averageValue = b;
        }
    }

    cout << minValue << " " << averageValue << " " << maxValue << endl;

    return 0;
}