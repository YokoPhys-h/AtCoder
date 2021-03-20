/**
*    author:  YokoPhys-h
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
    int N, K;
    cin >> N >> K;

    vector<int> D(K), test1(10), test2(10);
    for (int i = 0; i < K; i++)
    {
        cin >> D[i];
    }
    sort(D.begin(), D.end());

    for (int i = 0; i < 10; i++)
    {
        test1[i] = i;
    }

    for (int i = 0; i < K; i++)
    {
        test2[i] = test1[D[i]]; //嫌いな数字
    }

    //1~9のうち嫌いな数字を消去
    for (int i = 0; i < K; i++)
    {
        remove(test1.begin(), test1.end(), test2[i]);
    }
    //各桁の数字

    int a, b, c, d;
    a = N / 1000;
    N = N % 1000;

    b = N / 100;
    N = N % 100;

    c = N / 10;
    N = N % 10;

    d = N;

    int keta1000, keta100, keta10, keta1;

    bool dec = false;
    int i = 0;
    while (dec == false)
    {
        if (a <= test1[i])
        {
            keta1000 = test1[i];
            dec = true;
        }
        else
        {
            i++;
        }
    }

    return 0;
}