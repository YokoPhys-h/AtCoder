/**
*    author:  YokoPhys
*    created: 2021/03/30 15:30:13
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

bool func(int i, int w, const vector<int> &a)
{
    if (i == 0)
    {
        if (w == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    //a[i-1]を選ばない場合
    if (func(i - 1, w, a))
    {
        return true;
    }

    //a[i-1]を選ぶ場合
    if (func(i - 1, w - a[i - 1], a))
    {
        return true;
    }
    //どちらもfalseの場合
    return false;
}

int main()
{
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    if (func(N, W, a))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}