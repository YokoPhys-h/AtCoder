/**
*    author:  YokoPhys
*    created: 2021/03/30 21:17:31
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

template <class T>
void chmin(T &a, T b)
{
    if (a > b)
    {
        a = b;
    }
}
const long long INF = 1LL << 60;

int main()
{

    int N;
    cin >> N;
    vector<long long> h(N);
    for (int i = 0; i < N; i++)
    {
        cin >> h[i];
    }
    vector<long long> dp(N, INF);

    //初期条件
    dp[0] = 0;
    for (int i = 0; i < N; i++)
    {
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i > 1)
        {
            chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
        }
    }

    cout << dp[N - 1] << endl;

    return 0;
}