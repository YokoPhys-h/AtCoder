/**
*    author:  YokoPhys
*    created: 2021/03/24 13:58:06
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
    int h, w;
    cin >> h >> w;
    while (h != 0)
    {
        int i, j;
        for (i = 0; i < h; i++)
        {
            for (j = 0; j < w; j++)
            {
                if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1))
                    cout << "#";
                else
                    cout << ".";
            }
            cout << endl;
        }
        cout << endl;
        cin >> h >> w;
    }

    return 0;
}