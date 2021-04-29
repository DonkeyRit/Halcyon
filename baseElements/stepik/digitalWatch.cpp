#include <iostream>

using namespace std;

int main()
{
    int n, hours, minutes, seconds;
    cin >> n;

    hours = (n / 3600) % 24;
    minutes = (n - (n / 3600) * 3600) / 60;
    seconds = n % 60;

    cout << hours << ":" << minutes / 10 << minutes % 10 << ":" << seconds / 10 << seconds % 10 << endl;

    return 0;
}