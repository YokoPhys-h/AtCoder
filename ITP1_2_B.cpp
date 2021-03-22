/**
*    author:  YokoPhys
*    created: 2021/03/22 11:43:46
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
    int a, b, c;
    cin >> a >> b >> c;

    if ((a < b) && (b < c))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}