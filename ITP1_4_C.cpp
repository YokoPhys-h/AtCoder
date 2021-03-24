/**
*    author:  YokoPhys
*    created: 2021/03/24 11:30:52
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
    int a, b;
    char op;

    while (true)
    {
        cin >> a >> op >> b;
        if (op == '?')
        {
            break;
        }
        switch (op)
        {
        case '+':
            cout << a + b << "\n";
            break;

        case '-':
            cout << a - b << "\n";
            break;

        case '*':
            cout << a * b << "\n";
            break;

        case '/':
            cout << a / b << "\n";
            break;

        default:
            break;
        }
    }

    return 0;
}