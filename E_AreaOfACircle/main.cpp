#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    double pi = 3.141592653;
    double r;
    cin >> r;
    cout << fixed << setprecision(9);
    cout << pi * r * r << "\n";
    return 0;
}