#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cin >> x >> y;
    int floor = x/y;
    int round = ((double)(x%y)/y) >= 0.5 ? floor+1 : floor;
    int ceil = ((double)(x%y)/y) == 0 ? floor : floor +1;
    cout << "floor " << x << " / " << y << " = " << floor << "\n";
    cout << "ceil " << x << " / " << y << " = " << ceil << "\n";
    cout << "round " << x << " / " << y << " = " << round << "\n";

    return 0;
}
