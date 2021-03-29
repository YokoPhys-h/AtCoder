/**
*    author:  YokoPhys
*    created: 2021/03/28 19:46:12
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
    //入力受け取り
    int N, W;
    cin >> N >> W;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    bool exist = false;
    for (int bit = 0; bit < (1 << N); bit++)
    {
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            if (bit & (1 << i))
            {
                sum += a[i];
            }
        }
        if (sum == W)
        {
            exist = true;
        }
    }
    if (exist)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}