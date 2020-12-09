//https://www.hackerrank.com/challenges/time-conversion/problem
#include <bits/stdc++.h>
using namespace std;
/*
@@12AM----00@@
1AM-----01
2AM-----02
    '
    '
11AM----11
@@12PM----12@@
1PM-----13
2PM-----14
     '
     '
10PM----22
11PM----23
*/
string solve(int &hh, int &mm, int &ss, char &period)
{
    hh %= 12;
    if (period == 'P')
    {
        hh += 12;
    }
    ostringstream oss;
    oss << setw(2) << setfill('0') << hh << ":" << setw(2) << setfill('0') << mm << ":" << setw(2) << setfill('0') << ss;
    return oss.str();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int hh, mm, ss;
    char buffer, period;
    cin >> hh >> buffer >> mm >> buffer >> ss >> period;
    cout << solve(hh, mm, ss, period);

    return 0;
}