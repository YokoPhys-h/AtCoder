/**
*    author:  YokoPhys
*    created: 2021/03/27 22:25:09
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
#include <bitset>
using namespace std;

int main()
{
    int N;
    cin >> N;
    string A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        bitset<30>(A[i]);
    }
    for (int i = 0; i < N; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}