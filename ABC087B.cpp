/**
*    author:  Haruto Yokoyama
*    created: 2021/03/18 16:49:55
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
    int A;
    int B;
    int C;
    int count = 0;
    int X;

    cin >> X >> A >> B >> C;

    if (X % 50 != 0)
    {
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i <= A; i++)
    {
        for (int j = 0; j <= B; j++)
        {
            for (int k = 0; k <= C; k++)
            {
                if (500 * i + 100 * j + 50 * k == X)
                {
                    count++;
                }
            }
        }
    }

    cout << count;

    return 0;
}