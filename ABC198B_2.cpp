/**
*    author:  YokoPhys
*    created: 2021/04/11 21:20:04
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
#include <map>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    while (s.back() == '0')
        s.pop_back();
    t = s;
    reverse(s.begin(), s.end());
    cout << (t == s ? "Yes" : "No");

    return 0;
}