#include <iostream>

using namespace std;

int countSeconds(int hours, int minutes, int seconds)
{
    return hours * 3600 + minutes * 60 + seconds;
}

int main()
{
    int h1, m1, s1;
    int h2, m2, s2;

    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;

    cout << countSeconds(h2, m2, s2) - countSeconds(h1, m1, s1) << endl;

    return 0;
}