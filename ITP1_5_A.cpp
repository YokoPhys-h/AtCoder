/**
*    author:  YokoPhys
*    created: 2021/03/24 13:17:49
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
    int H, W;

    while (true)
    {
        cin >> H >> W;
        if ((H == 0) && (W == 0))
        {
            break;
        }
        for (int i = 0; i < H; i++)
        {
            for (int i = 0; i < W; i++)
            {
                cout << '#';
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}