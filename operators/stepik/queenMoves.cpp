#include <iostream>

using namespace std;

/*
Шахматный ферзь ходит по диагонали, горизонтали или вертикали. Даны две различные клетки шахматной доски, 
определите, может ли ферзь попасть с первой клетки на вторую одним ходом.

Формат входных данных
    Программа получает на вход четыре числа от 1 до 8 каждое, 
    задающие номер столбца и номер строки сначала для первой клетки, 
    потом для второй клетки.
Формат выходных данных
    Программа должна вывести YES, если из первой клетки ходом ферзя 
    можно попасть во вторую или NO в противном случае.
*/

int main()
{
    int startX, startY, targetX, targetY;
    cin >> startX >> startY >> targetX >> targetY;

    bool mainDiagonal = (startX - targetX) == (startY - targetY);
    bool sideDiagonal = -1 * (startX - targetX) == (startY - targetY) || (startX - targetX) == -1 * (startY - targetY);

    if(startX == targetX || startY == targetY || mainDiagonal || sideDiagonal)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}