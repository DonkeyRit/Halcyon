#include <iostream>

using namespace std;

int main()
{

    const int path = 109;

    int v, t, s;
    cin >> v >> t;
    cout << (path + v * t % path) % 109 << endl;

    return 0;
}