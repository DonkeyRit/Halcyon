#include <iostream>

using namespace std;

/*
Шахматный конь ходит буквой “Г” — на две клетки по вертикали в любом направлении 
и на одну клетку по горизонтали, или наоборот. Даны две различные клетки шахматной доски, 
определите, может ли конь попасть с первой клетки на вторую одним ходом.

Формат входных данных
    Программа получает на вход четыре числа от 1 до 8 каждое, 
    задающие номер столбца и номер строки сначала для первой клетки, 
    потом для второй клетки.
Формат выходных данных
    Программа должна вывести YES, если из первой клетки ходом коня можно попасть во вторую 
    или NO в противном случае.
*/

int main()
{
    int startX, startY, targetX, targetY;
    cin >> startX >> startY >> targetX >> targetY;

    bool leftUp = (startX - 1 == targetX && startY - 2 == targetY) 
        || (startX - 2 == targetX && startY - 1 == targetY);

    bool rightUp = (startX + 1 == targetX && startY - 2 == targetY) 
        || (startX + 2 == targetX && startY - 1 == targetY);

    bool leftDown = (startX - 2 == targetX && startY + 1 == targetY) 
        || (startX - 1 == targetX && startY + 2 == targetY);

    bool rightDown = (startX + 1 == targetX && startY + 2 == targetY) 
        || (startX + 2 == targetX && startY + 1 == targetY);

    if(leftUp || leftDown || rightUp || rightDown)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}