/**
*    author:  Haruto Yokoyama
*    created: 2021/03/17 18:09:37
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
using namespace std;

int main()
{
    int a, b, c;

    cin >> a >> b;

    c = a * b;

    if (c % 2 == 0)
    {
        cout << "even";
    }
    else if (c % 2 != 0)
    {
        cout << "odd";
    }

    return 0;
}