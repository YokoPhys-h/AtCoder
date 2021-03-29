/**
*    author:  YokoPhys
*    created: 2021/03/28 20:43:54
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

int GCD(int m, int n)
{
    if (n == 0)
    {
        return m;
    }

    return GCD(n, m % n);
}
int main()
{
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;

    return 0;
}