#include <iostream>

using namespace std;

int main()
{
    int a, b, c, minn, maxx;
    cin >> a >> b >> c;
    minn = a;
    maxx = a;
    if (minn >= b)
        minn = b;
    if (minn >= c)
        minn = c;
    if (maxx <= b)
        maxx = b;
    if (maxx <= c)
        maxx = c;


    cout << minn << " " << maxx << "\n";
    return 0;
}
