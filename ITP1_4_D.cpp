/**
*    author:  YokoPhys
*    created: 2021/03/24 11:56:26
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
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    int min = *min_element(a.begin(), a.end());
    int max = *max_element(a.begin(), a.end());
    long long int sum = accumulate(a.begin(), a.end(), 0LL);

    cout << min << " " << max << " " << sum << "\n";

    return 0;
}