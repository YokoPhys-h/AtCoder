/**
*    author:  YokoPhys
*    created: 2021/03/22 18:26:16
**/

#define _USE_MATH_DEFINES

#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    while (!(x == 0 && y == 0))
    {
        if (x < y)
            cout << x << " " << y << endl;
        else
            cout << y << " " << x << endl;
        cin >> x >> y;
    }
    return 0;
}