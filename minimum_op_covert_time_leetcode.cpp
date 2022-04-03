// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    int get_time(string s)
    {
        int k = (stoi(s.substr(0, 2))) * 60 + (stoi(s.substr(3)));

        return k;
    }

    int convertTime(string current, string goal)
    {
        int n = current.size();
        int m = goal.size();

        int diff = get_time(goal) - get_time(current);

        int a[4] = {60, 15, 5, 1};

        int ans = 0;
        for (int i = 0; i < 4; i++)
        {
            ans += diff / a[i];
            diff %= a[i];
        }

        return diff;
    }
}; 