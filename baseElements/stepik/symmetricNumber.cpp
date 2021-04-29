#include <iostream>

using namespace std;

int isSymmetricNumber(int n)
{
    int first = n / 1000;
    int fourth = n % 10;

    int second = (n / 100) % 10;
    int third = (n / 10) % 10;

    return first == fourth && second == third;
}

int main()
{
    int n;

    cin >> n;
    cout << isSymmetricNumber(n) << endl;

    return 0;
}