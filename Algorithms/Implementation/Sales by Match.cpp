//https://www.hackerrank.com/challenges/sock-merchant/problem

#include <bits/stdc++.h>
using namespace std;

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar)
{
    map<int, int> freq;
    for (auto &x : ar)
    {
        if (freq.find(x) == freq.end())
            freq[x] = 0;
        freq[x]++;
    }
    int count = 0;
    for (auto &x : freq)
    {
        count += x.second / 2;
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    cout << sockMerchant(n, v);

    return 0;
}
