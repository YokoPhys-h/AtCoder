/**
*    author:  YokoPhys
*    created: 2021/03/22 11:23:16
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
    int S;
    cin >> S;

    int h, m, s;

    if (S >= 3600)
    {
        h = S / 3600;
        m = (S % 3600) / 60;
        s = ((S % 3600) % 60);
    }
    else if (60 <= S < 3600)
    {
        h = 0;
        m = S / 60;
        s = (S % 60);
    }
    else
    {
        h = 0;
        m = 0;
        s = S;
    }

    cout << h << ":" << m << ":" << s << "\n";

    return 0;
}