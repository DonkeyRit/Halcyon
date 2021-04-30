#include <iostream>

using namespace std;

/*
Даны два целых числа. Программа должна вывести единицу, если первое число больше второго, двойку, если второе больше первого, или ноль, если они равны.

Формат входных данных
    Вводятся два числа.
*/

int max(int a, int b)
{

    if(a > b)
    {
        return 1;

    } else if (a < b)
    {
        return 2;

    } else {
        return 0;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(a,b) << endl;
    return 0;
}