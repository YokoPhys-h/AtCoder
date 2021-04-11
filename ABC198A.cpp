/**
*    author:  YokoPhys
*    created: 2021/04/11 21:04:48
**/

#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

long long combi(long long n, long long k)
{
    if (n == k || k == 0)
        return 1;
    else if (n < k)
    {
        return 0;
    }
    else
    {
        return combi(n - 1, k - 1) + combi(n - 1, k);
    }
}

int main()
{
    int N;
    cin >> N;

    int answer = combi(N - 1, 1);
    cout << answer << endl;

    return 0;
}