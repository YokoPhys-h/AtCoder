/**
*    author:  YokoPhys
*    created: 2021/03/24 11:21:25
**/

#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double r;
    cin >> r;
    cout << fixed << setprecision(6);
    cout << (r * r * M_PI) << " " << (2. * M_PI * r) << "\n";

    return 0;
}