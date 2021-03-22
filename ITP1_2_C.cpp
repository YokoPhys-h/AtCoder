/**
*    author:  YokoPhys
*    created: 2021/03/22 11:51:06
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
    vector<int> a(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    cout << a[0] << " " << a[1] << " " << a[2] << "\n";

    return 0;
}