/**
*    author:  YokoPhys
*    created: 2021/03/24 13:32:27
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
        if ((H == 0) & (W == 0))
        {
            break;
        }
        for (int i = 0; i < W; i++)
        {
            cout << '#';
        }
        cout << "\n";
        for (int i = 0; i < (H - 2); i++)
        {

            cout << '#';
            for (int i = 0; i < (W - 2); i++)
            {
                cout << ".";
            }
            cout << "#\n";
        }

        for (int i = 0; i < W; i++)
        {
            cout << '#';
        }
        cout << "\n";
        cout << "\n";
    }

    return 0;
}