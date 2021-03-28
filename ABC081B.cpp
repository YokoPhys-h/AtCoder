/**
*    author:  Haruto Yokoyama
*    created: 2021/03/17 18:31:01
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
    int N;
    cin >> N;

    int A[N], B[N];
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";

    while (true)
    {
        bool exist_odd = false;
        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 != 0)
            {
                exist_odd = true;
            }
        }
        if (exist_odd)
        {
            break;
        }

        for (int i = 0; i < N; i++)
        {
            A[i] = A[i] / 2;
        }
        count++;
    }

    cout << count;
    return 0;
}