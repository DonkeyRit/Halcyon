#include <iostream>

using namespace std;

/*
Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.

Формат входных данных
    Вводятся два числа.
*/

int max(int a, int b)
{
    return (a > b)? a : b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << max(a,b) << endl;
    return 0;
}