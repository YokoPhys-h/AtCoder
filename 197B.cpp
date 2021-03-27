/**
*    author:  YokoPhys
*    created: 2021/03/27 21:08:56
**/

#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int H, W, X, Y;

    cin >> H >> W >> X >> Y;

    string S[H];
    string masu[H][W];
    for (int i = 0; i < H; i++)
    {
        cin >> S[i];
    }

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            masu[i][j] = S[i].substr(j, 1);
        }
    }

    int count = 0;
    //右
    int a = Y - 1;
    while (true)
    {
        if (masu[X - 1][a] == "#")
        {
            break;
        }
        else if (a == W - 1)
        {
            if (masu[X - 1][a] == ".")
            {
                count++;
                break;
            }
            else
            {
                break;
            }
        }

        else if (masu[X - 1][a] == ".")
        {
            count++;
        }
        a++;
    }
    //左
    int b = Y - 1;
    while (true)
    {
        if (masu[X - 1][b] == "#")
        {
            break;
        }
        else if (b == 0)
        {
            if (masu[X - 1][b] == ".")
            {
                count++;
                break;
            }
            else
            {
                break;
            }
        }
        else if (masu[X - 1][b] == ".")
        {
            count++;
        }
        b--;
    }
    //上
    int c = X - 1;
    while (true)
    {
        if (masu[c][Y - 1] == "#")
        {
            break;
        }
        else if (c == 0)
        {
            if (masu[c][Y - 1] == ".")
            {
                count++;
                break;
            }
            else
            {
                break;
            }
        }
        else if (masu[c][Y - 1] == ".")
        {
            count++;
        }
        c--;
    }
    //下
    int d = X - 1;
    while (true)
    {
        if (masu[d][Y - 1] == "#")
        {
            break;
        }
        else if (d == H - 1)
        {
            if (masu[d][Y - 1] == ".")
            {
                count++;
                break;
            }
            else
            {
                break;
            }
        }
        else if (masu[d][Y - 1] == ".")
        {
            count++;
        }
        d++;
    }
    cout << count - 3 << endl;

    return 0;
}