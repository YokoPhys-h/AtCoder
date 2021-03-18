/**
*    author:  Haruto Yokoyama
*    created: 2021/03/18 17:18:58
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

int findSumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int total = 0;
    for (int i = 1; i <= N; ++i)
    {
        int sum = findSumOfDigits(i);
        if (sum >= A && sum <= B)
        {
            total += i;
        }
    }
    cout << total << endl;

    return 0;
}