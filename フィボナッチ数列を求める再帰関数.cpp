/**
*    author:  YokoPhys
*    created: 2021/03/28 20:56:49
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

int fibo(int N)
{
    if (N == 0)
    {
        return 0;
    }
    else if (N == 1)
    {
        return 1;
    }

    return fibo(N - 1) + fibo(N - 2);
}
int main()
{
    return 0;
}