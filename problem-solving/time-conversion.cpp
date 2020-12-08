//https://www.hackerrank.com/challenges/time-conversion/problem
#include <bits/stdc++.h>
using namespace std;
string solve(string &s)
{
    //extracting hrs
    int hrs = stoi(s.substr(0, 2)) % 12;

    //checking if last 2nd character is P or not
    if (s[s.length() - 2] == 'P')
    {
        hrs += 12;
    }
    stringstream ss(to_string(hrs));
    //pads with 0 if variable is single digit for eg 5 is padded as 05
    ss << setw(2) << setfill('0') << hrs;
    //replacing hrs with modified hrs
    s.replace(0, 2, ss.str());
    s.pop_back();
    s.pop_back();
    return s;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    cout << solve(s);

    return 0;
}