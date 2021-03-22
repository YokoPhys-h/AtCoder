/**
*    author:  YokoPhys
*    created: 2021/03/22 17:23:36
**/

#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <vector>
#include <typeinfo>
#include <algorithm>
#include <set>
#include <numeric>
#include <list>
using namespace std;

int main()
{
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    int W_real = W - r;
    int H_real = H - r;

    int position[1][2];

    position[0][0] = x;
    position[0][1] = y;

    if ((r <= position[0][0]) && (position[0][0] <= (W_real)))
    {
        if ((r <= position[0][1]) && (position[0][1] <= (H_real)))
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    else
    {
        cout << "No\n";
    }

    return 0;
}