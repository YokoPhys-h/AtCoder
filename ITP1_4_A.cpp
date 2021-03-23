/**
*    author:  YokoPhys
*    created: 2021/03/23 23:25:04
**/

#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, d, r;
    double f;
    cin >> a >> b;

    d = a / b;
    r = a % b;
    f = 1.0 * a / b;

    cout << d << " " << r << " ";
    cout << fixed << setprecision(7) << f << "\n";

    return 0;
}