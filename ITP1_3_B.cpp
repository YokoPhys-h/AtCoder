/**
*    author:  YokoPhys
*    created: 2021/03/22 17:49:19
**/

#define _USE_MATH_DEFINES

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i = 1, x;
    cin >> x;
    while (x != 0)
    {
        cout << "Case " << i << ": " << x << endl;
        i++;
        cin >> x;
    }
    return 0;
}