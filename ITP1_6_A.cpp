/**
*    author:  YokoPhys
*    created: 2021/03/24 14:43:34
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
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a.begin(), a.end());
    cout << a[0];
    for (int i = 1; i < a.size(); i++)
    {
        cout << " " << a[i];
    }
    cout << "\n";
    return 0;
}