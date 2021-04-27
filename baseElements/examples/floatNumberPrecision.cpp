#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double i = 12345.6789;
    cout << setprecision(3) << i << endl;
    cout << setprecision(6) << i << endl;
    cout << setprecision(9) << i << endl;

    cout << scientific << i << endl;
    cout << fixed << i << endl;

    i = 10;
    cout << i << endl;
    cout << showpoint << i << endl;

    return 0;
}