/**
*    author:  YokoPhys
*    created: 2021/03/21 18:36:13
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

vector<int> vector_remove(vector<int> test, vector<int> remove) //vector_remove(除きたいvector型,除く数字のvector型配列)
{
    for (int i = 0; i < remove.size(); i++)
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
int main()
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {2, 3, 4};

    a = vector_remove(a, b);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}