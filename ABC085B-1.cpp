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
    vector<int> d(110);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> d[i];
    }

    vector<int> num(110, 0);
    for (int i = 0; i < N; i++)
    {
        num[d[i]]++;
    }

    int res = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (num[i] > 0)
        {
            res++;
        }
    }
    cout << res << endl;

    return 0;
}