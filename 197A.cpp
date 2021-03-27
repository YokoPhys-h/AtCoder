/**
*    author:  YokoPhys
*    created: 2021/03/27 21:00:14
**/

#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S;
    cin >> S;
    string s1 = S.substr(0, 1);
    string s2 = S.substr(1, 2);
    cout << s2 << s1 << endl;

    return 0;
}