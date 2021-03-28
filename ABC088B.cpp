/**
*    author:  Haruto Yokoyama
*    created: 2021/03/18 23:31:27
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
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N];
    int B[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    sort(a, a + N, greater<int>());

    for (int i = 0; i < N; i++)
    {
        cout << a[i] << endl;
    }

    int Alice = 0;
    int Bob = 0;
    int diff = 0;

    if (N % 2 == 0)
    {
        for (int i = 0; i < N / 2; i++)
        {
            Alice = Alice + a[2 * i];
            Bob = Bob + a[2 * i + 1];
        }
    }

    else
    {
        for (int i = 0; i < (N + 1) / 2; i++)
        {
            Alice = Alice + a[2 * i];
            Bob = Bob + a[2 * i + 1];
        }
    }

    diff = Alice - Bob;

    cout << diff << endl;
    return 0;
}