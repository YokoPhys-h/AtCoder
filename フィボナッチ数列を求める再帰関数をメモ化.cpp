/**
*    author:  YokoPhys
*    created: 2021/03/30 14:54:32
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

vector<long long> memo;

long long fibo(int N)
{
    if (N == 0)
    {
        return 0;
    }
    else if (N == 1)
    {
        return 1;
    }
    if (memo[N] != -1)
    {
        return memo[N];
    }

    return memo[N] = fibo(N - 1) + fibo(N - 2);
}

int main()
{
    memo.assign(50, -1);

    fibo(49);

    for (int N = 2; N < 50; N++)
    {
        cout << N << "項目" << memo[N] << endl;
    }

    return 0;
}