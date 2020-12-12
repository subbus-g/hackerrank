#include <bits/stdc++.h>
using namespace std;
int migratoryBirds(vector<int> &arr)
{
    //initilized with 0's
    array<int, 5> types{0};
    for (auto &x : arr)
    {
        //mapping types to array indices
        //index 0....type 1
        //index 1....type 2
        //index 2....type 3
        //index 3....type 4
        //index 4....type 5
        types[x - 1]++;
    }

    //1+ since it bird types are mapped by -1
    return 1 + max_element(types.begin(), types.end()) - types.begin();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr)
    {
        cin >> x;
    }
    cout << migratoryBirds(arr);

    return 0;
}
