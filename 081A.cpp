/**
*    author:  Haruto Yokoyama
*    created: 2021/03/17 18:17:23
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
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }

    cout << count << "\n";
    cout << s.size();
    return 0;
}