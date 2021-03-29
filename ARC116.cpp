/**
*    author:  YokoPhys
*    created: 2021/03/28 21:00:23
**/

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

vector<int64_t> enum_divisors(long long unsigned int N)
{
    vector<int64_t> res;
    for (int64_t i = 1; i * i <= N; ++i)
    {
        if (N % i == 0)
        {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N / i != i)
                res.push_back(N / i);
        }
    }
    return res;
}
int main()
{
    int64_t N;
    int T;
    cin >> T;

    int count_odd[T] = {}, count_even[T] = {};

    for (int64_t j = 0; j < T; j++)
    {
        cin >> N;
        const auto &res = enum_divisors(N);
        for (int64_t i = 0; i < res.size(); i++)
        {
            if (res[i] % 2 == 0)
            {
                count_even[j]++;
            }
            else
            {
                count_odd[j]++;
            }
        }
    }
    for (int64_t j = 0; j < T; j++)
    {
        if (count_odd[j] > count_even[j])
        {
            cout << "Odd" << endl;
        }
        else if (count_odd[j] < count_even[j])
        {
            cout << "Even" << endl;
        }
        else
        {
            cout << "Same" << endl;
        }
    }

    return 0;
}