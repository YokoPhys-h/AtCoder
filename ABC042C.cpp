/**
*    author:  YokoPhys
*    created: 2021/03/20 20:34:17
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

    int n, k;
    cin >> n >> k;
    vector<int> d(k);
    for (int i = 0; i < k; i++)
    {
        cin >> d[i];
    }

    for (int x = n; x < 100000; x++)
    {
        int tmp = x;
        set<int> s;
        while (tmp != 0)
        {
            s.insert(tmp % 10);
            tmp /= 10;
        }
        bool flag = true;

        for (int i = 0; i < k; i++)
        {
            if (s.count(d[i])) //個数を表示==0,1を表示(c++では0以外は全てtrueとしてカウントされる)
                flag = false;
        }
        if (flag)
        {
            cout << x << endl;
            break;
        }
    }

    return 0;
}