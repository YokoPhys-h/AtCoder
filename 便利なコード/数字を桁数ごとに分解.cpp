/**
*    author:  YokoPhys
*    created: 2021/03/21 19:36:48
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

int digit_break(unsigned int n, int number) //digit_break(数字,得たい桁)
{
    int digit_number = log10(n) + 1;
    if (digit_number < number)
    {
        cout << "please decrease number which you want to get.\n";
        unexpected();
    }

    int a[digit_number];
    int over;
    for (int i = 0; i < digit_number; i++)
    {
        over = pow(10, digit_number - 1 - i);
        a[i] = n / over;
        n %= over;
    }
    return a[number - 1];
}

int main()
{
    int N = 1234;
    cout << digit_break(N, 2);

    return 0;
}