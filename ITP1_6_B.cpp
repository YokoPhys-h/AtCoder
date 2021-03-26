/**
*    author:  YokoPhys
*    created: 2021/03/26 18:46:35
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
    int n;
    cin >> n;
    int card[4][13] = {{}};

    char a;
    int b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        switch (a)
        {
        case 'S':
            card[0][b - 1] = 1;
            break;
        case 'H':
            card[1][b - 1] = 1;
            break;
        case 'C':
            card[2][b - 1] = 1;
            break;
        case 'D':
            card[3][b - 1] = 1;
            break;

        default:
            break;
        }
    }
    for (int i = 0; i < 52; i++)
    {
        switch (i / 13)
        {
        case 0:
            if (card[0][i % 13] == 0)
                cout << "S " << i + 1 << endl;
            break;
        case 1:
            if (card[1][i % 13] == 0)
                cout << "H " << i % 13 + 1 << endl;
            break;
        case 2:
            if (card[2][i % 13] == 0)
                cout << "C " << i % 13 + 1 << endl;
            break;
        case 3:
            if (card[3][i % 13] == 0)
                cout << "D " << i % 13 + 1 << endl;
            break;
        }
    }

    return 0;
}