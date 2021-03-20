/**
*    author:  YokoPhys-h
*    created: 2021/03/19 14:23:36
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
using namespace std;

int main()
{
    int N;
    int d[110];
    cin >> N;
    for (int i = 0; i < N; ++i)
        cin >> d[i];

    set<int> values;
    for (int i = 0; i < N; ++i)
    {
        values.insert(d[i]);
    }

    cout << values.size() << endl;

    return 0;
}