/**
*    author:  YokoPhys
*    created: 2021/03/22 18:37:51
**/

#define _USE_MATH_DEFINES

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int n = a;
    int counter = 0;
    while ((a <= n) && (n <= b))
    {
        if (c % n == 0)
        {
            counter++;
        }
        n++;
    }
    cout << counter << "\n";

    return 0;
}