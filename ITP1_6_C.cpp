/**
*    author:  YokoPhys
*    created: 2021/03/27 12:19:59
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
    int n, b, f, r, v;
    cin >> n;

    int build[4][3][10] = {{{}}};

    for (int i = 0; i < n; i++)
    {
        cin >> b >> f >> r >> v;
        build[b - 1][f - 1][r - 1] += v;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                cout << " ";
                cout << build[i][j][k];
            }
            cout << endl;
        }
        if (i < 3)
        {
            cout << "####################" << endl;
        }
    }

    return 0;
}