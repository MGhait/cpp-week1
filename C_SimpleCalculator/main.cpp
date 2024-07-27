#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    // the output only will be long long input will be int 10^5
    cin >> x >> y;
    cout << x << " + " << y << " = " << x + y << "\n";
    cout << x << " * " << y << " = " << (long long) x * y << "\n";
    cout << x << " - " << y << " = " << x - y << "\n";
    return 0;
}
