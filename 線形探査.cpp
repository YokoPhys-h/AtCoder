/**
*    author:  YokoPhys
*    created: 2021/03/28 16:53:13
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
    int N, v;
    cin >> N >> v;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    //線形探査
    bool exist = false;
    for (int i = 0; i < N; i++)
    {
        if (a[i] == v)
        {
            exist = true;
        }
    }

    //結果出力
    if (exist)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    return 0;
}