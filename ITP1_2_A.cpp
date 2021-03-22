/**
*    author:  YokoPhys
*    created: 2021/03/22 11:37:53
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
    int a, b;
    cin >> a >> b;

    if (a < b)
    {
        cout << "a < b\n";
    }
    else if (a > b)
    {
        cout << "a > b\n";
    }
    else
    {
        cout << "a == b\n";
    }

    return 0;
}