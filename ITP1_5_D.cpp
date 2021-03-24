/**
*    author:  YokoPhys
*    created: 2021/03/24 14:32:17
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
    int i = 1;
    while (++i <= n)
    {
        int x = i;
        if (x % 3 == 0)
        {
            cout << " " << i;
            continue;
        }
        while (x)
        {
            if (x % 10 == 3)
            {
                cout << " " << i;
                break;
            }
            x /= 10;
        }
    }
    cout << endl;

    return 0;
}