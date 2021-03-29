/**
*    author:  YokoPhys
*    created: 2021/03/28 17:10:03
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
const int INF = 200000000;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }

    //線形探査
    int min_value = INF;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (a[i] + b[j] < K)
            {
                continue;
            }
            if (a[i] + b[j] < min_value)
            {
                min_value = a[i] + b[i];
            }
        }
    }
    cout << min_value << endl;

    return 0;
}