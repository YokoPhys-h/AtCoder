/**
*    author:  YokoPhys
*    created: 2021/03/31 14:02:34
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
void chmax(T &a, T b)
{
    if (a < b)
    {
        a = b;
    }
}

int main()
{
    int N;
    long long W;
    cin >> N >> W;
    vector<long long> weight(N), value(N);

    for (int i = 0; i < N; i++)
    {
        cin >> weight[i] >> value[i];
    }

    //Dpテーブル定義
    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));

    //DPループ
    for (int i = 0; i < N; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            //i番目
            if (w - weight[i] >= 0) //超えないという条件
            {
                chmax(dp[i + 1][w], dp[i][w - weight[i]] + value[i]);
            }
            //i番目を選ばない
            chmax(dp[i + 1][w], dp[i][w]);
        }

        //最適値の出力
        cout << dp[N][W] << endl;
    }

    return 0;
}