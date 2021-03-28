/**
*    author:  YokoPhys-h
*    created: 2021/03/20 20:07:10
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
    int N, L;

    cin >> N >> L;

    vector<string> S(N);

    for (int i = 0; i < (int)(N); i++)
    {
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    string ans;
    for (int i = 0; i < N; i++)
    {
        ans += S[i];
    }
    cout << ans << endl;
    return 0;
}