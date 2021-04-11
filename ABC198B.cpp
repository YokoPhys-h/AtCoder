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

vector<long long int> vector_remove(vector<long long int> test, vector<long long int> remove) //vector_remove(除きたいvector型,除く数字のvector型配列)
{
    for (long long unsigned int i = 0; i < remove.size(); i++)
    {
        auto itr = test.begin();
        while (itr != test.end())
        {
            if ((*itr) == remove[i])
            {
                itr = test.erase(itr);
            }
            else
            {
                itr++;
            }
        }
    }
    return test;
}

long long unsigned int GetDigit(long long unsigned int num)
{
    long long unsigned digit = 0;
    while (num != 0)
    {
        num /= 10;
        digit++;
    }
    return digit;
}

long long int digit_break(long long unsigned int n, long long unsigned int number) //digit_break(数字,得たい桁)
{
    long long unsigned int digit_number = log10(n) + 1;
    if (digit_number < number)
    {
        cout << "please decrease number which you want to get.\n";
        unexpected();
    }

    long long int a[digit_number];
    long long int over;
    for (long long unsigned int i = 0; i < digit_number; i++)
    {
        over = pow(10, digit_number - 1 - i);
        a[i] = n / over;
        n %= over;
    }
    return a[number - 1];
}

int main()
{
    long long int N;
    cin >> N;

    long long int digit = GetDigit(N);
    vector<long long int> f(digit, 0);
    vector<long long int> s(digit, 0);
    vector<long long int> f2;
    vector<long long int> s2;

    for (long long int i = 0; i < digit; i++)
    {
        f[i] = digit_break(N, i + 1);
        s[i] = f[i];
    }
    reverse(s.begin(), s.end());
    int number = 0;
    for (long long unsigned int i = 0; i < s.size(); i++)
    {
        if (s[i] == 0)
        {
            number++;
        }
        else
        {
            break;
        }
    }

    for (long long unsigned int i = 0; i < number + f.size(); i++)
    {
        if (i < number)
        {
            s2[i] = 0;
        }
        else
        {
            s2[i] = s[i - number];
        }
        f2[i] = s2[i];
    }
    reverse(f2.begin(), f2.end());

    long long unsigned int cnt = 0;

    for (long long unsigned int i = 0; i < f2.size(); i++)
    {
        if (f2[i] == s2[i])
        {
            cnt++;
        }
    }
    if (cnt == f2.size())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}