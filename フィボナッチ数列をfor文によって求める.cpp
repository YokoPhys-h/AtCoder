/**
*    author:  YokoPhys
*    created: 2021/03/30 14:47:40
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
    vector<long long> F(50);
    F[0] = 0, F[1] = 1;
    for (int i = 2; i < 50; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
        cout << i << "項目" << F[i] << endl;
    }

    return 0;
}