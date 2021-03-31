/**
*    author:  YokoPhys
*    created: 2021/03/31 20:48:50
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
const int INF = 1 << 29;

int main()
{
    //入力
    string S, T;
    cin >> S >> T;

    //DPテーブル定義
    vector<vector<int>> dp(S.size() + 1, vector<int>(T.size() + 1, INF));

    //DP初期条件
    dp[0][0] = 0;

    //DPループ
    for (int i = 0; i < S.size(); i++)
    {
        for (int j = 0; j < T.size(); j++)
        {
            //変更操作
            if (i > 0 && j > 0)
            {
                if (S[j - 1] == T[j - 1])
                {
                    chmin(dp[i][j], dp[i - 1][j - 1]);
                }
                else
                {
                    chmin(dp[i][j], dp[i - 1][j - 1] + 1);
                }
            }

            //消去操作
            if (i > 0)
            {
                chmin(dp[i][j], dp[i - 1][j] + 1);
            }

            //挿入操作
            if (j > 0)
            {
                chmin(dp[i][j], dp[i][j - 1] + 1);
            }
        }
    }

    cout << dp[S.size()][T.size()] << endl;

    return 0;
}