//https://www.hackerrank.com/challenges/time-conversion/problem
#include <bits/stdc++.h>
using namespace std;
void solve(string &s)
{

    int hrs = stoi(s.substr(0, 2)) % 12;

    if (s[s.length() - 2] == 'P')
    {
        hrs += 12;
    }
    s.pop_back();
    s.pop_back();
    cout << setw(2) << setfill('0') << hrs << s.substr(2, s.size() - 2);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    solve(s);

    return 0;
}