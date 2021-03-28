/**
*    author:  YokoPhys-h
*    created: 2021/03/20 19:53:47
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
    int A, B, C;
    cin >> A >> B >> C;

    vector<int> test{A, B, C};

    int count_five, count_seven;
    count_five = count(test.begin(), test.end(), 5);
    count_seven = count(test.begin(), test.end(), 7);

    if ((count_five == 2) && (count_seven = 1))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}